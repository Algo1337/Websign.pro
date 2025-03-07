#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "../algo.h"
#include <Net/web.h>

Map Headers = {0};
String ContactBuffer = {0};

void SetupHeaders() {
    Headers = NewMap();
    Headers.Append(&Headers, "Content-Type", "text/html; charset=UTF-8");
    Headers.Append(&Headers, "Connection", "close");
}

char *FindKey(Map *m, const char *key) {
    if(!m || !m->arr)
        return NULL;

    for(int i = 0; i < m->idx; i++) {
        if(!m->arr[i])
            break;

        if(!strcmp(((Key *)m->arr[i])->key, key))
            return ((Key *)m->arr[i])->value;

        if(strstr(((Key *)m->arr[i])->key, key))
            return ((Key *)m->arr[i])->value;
    }

    return NULL;
}

void ContactFormHandler(cWS *server, cWR *req, WebRoute *route, int socket) {
    char *n = decode_input_symbols(FindKey(&req->Queries, "submit_email"));
    char *from = decode_input_symbols(FindKey(&req->Queries, "from_email"));
    char *subj = decode_input_symbols(FindKey(&req->Queries, "email_subject"));
    char *msg = decode_input_symbols(FindKey(&req->Queries, "email_msg"));
    
    if((!n || !from) && req->RequestType.Is(&req->RequestType, "POST") && !req->Body.Contains(&req->Body, "submit_email")) {
        printf("Retrieving the rest of the POST data....!\n");

        fetch_cf_post_data(server, req, socket);

        n = decode_input_symbols(FindKey(&req->Queries, "submit_email"));
        from = decode_input_symbols(FindKey(&req->Queries, "from_email"));
        subj = decode_input_symbols(FindKey(&req->Queries, "email_subject"));
        msg = decode_input_symbols(FindKey(&req->Queries, "email_msg"));
    }


    if(n != NULL || from != NULL) {
        printf("[ + ] New Contact Info\nfrom: %s\nSubject: %s\nBody: %s\n", from, subj, msg);
        ContactBuffer.Clear(&ContactBuffer);
        ContactBuffer.AppendArray(&ContactBuffer, (const char *[]){"Email has been sent, Expect a reply within 48 hours sent to: ", from, " !", NULL});
        ContactBuffer.data[ContactBuffer.idx] = '\0';
    }

    // Ensure to set this buffer if it isnt already set
    Control *ContactBody =  stack_to_heap(ContactForm);
    if(((Control *)((Control *)((Control *)ContactBody->SubControls[2])->SubControls[1])->SubControls[8])->Text != ContactBuffer.data)
        ((Control *)((Control *)((Control *)ContactBody->SubControls[2])->SubControls[1])->SubControls[8])->Text = ContactBuffer.data;

    char *template = route->ConstructCHT((Control *[]){&HeadControl, &ContactForm, NULL}, ContactCSS);
    if(!template)
        printf("[ - ] Error, Unable to build template....\n");

    SendResponse(server, socket, OK, Headers, ((Map){0}), ((Map){}), template);
    free(template);


	if(ContactBody->SubControlCount > 3)
        DestructControls(ContactBody);
    
    ContactBuffer.Clear(&ContactBuffer);
}

void RouteHandler(cWS *server, cWR *req, WebRoute *route, int socket) {
    char *chk = NULL;
    for(int i = 0; i < req->Headers.idx; i++) {
        if(!req->Headers.arr[i])
            break;

        if(strstr(((Key *)req->Headers.arr[i])->key, "CF-Connecting-IP") || strstr(((Key *)req->Headers.arr[i])->key, "cf-connecting-ip") || strstr(((Key *)req->Headers.arr[i])->key, "x-forwarded-for"))
            chk = ((Key *)req->Headers.arr[i])->value;
    }

    if(chk)
        printf("Sock IP: %s | CF IP: %s\n", req->ClientIP, chk);
    else
        printf("Sock IP: %s | Unable to find Client IP through Cloudflare....!\n", req->ClientIP);
    
    Control **Controls;
    CSS **Style;
    if(req->Route.Is(&req->Route, "/") || req->Route.Is(&req->Route, "/index")) {
        Controls = (Control *[]){&HeadControl, &IndexBody, NULL};
        Style = IndexCSS;
    } else if(req->Route.Is(&req->Route, "/projects")) {
        Controls = (Control *[]){&HeadControl, &ProjectList, NULL};
        Style = ProjectCSS;
    } else if(req->Route.Is(&req->Route, "/login")) {
        Controls = (Control *[]){&HeadControl, &LoginForm, NULL};
        Style = LoginCSS;
    } else if(req->Route.Is(&req->Route, "/user/")) {
        Controls = (Control *[]){&HeadControl, &UserDashboard, NULL};
        Style = UserDashboardCSS;
    } else if(req->Route.Is(&req->Route, "/services")) {
        Controls = (Control *[]){&HeadControl, &Store, NULL};
        Style = StoreCSS;
    } else { route->Template = "Err404"; }

    char *template = route->ConstructCHT(Controls, Style);
    if(!template)
        printf("[ - ] Unable to construct template....!\n");

    SendResponse(server, socket, OK, Headers, ((Map){0}), ((Map){0}), template);
    free(template);
}