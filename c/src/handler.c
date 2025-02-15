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

char *GetSocketIP(int sock) {
    struct sockaddr_in addr;
    socklen_t addr_len = sizeof(addr);

    if (getpeername(sock, (struct sockaddr *)&addr, &addr_len) == -1)
        return NULL;

    char client_ip[INET_ADDRSTRLEN] = {0};
    if (inet_ntop(AF_INET, &addr.sin_addr, client_ip, sizeof(client_ip)) == NULL)
        return NULL;

    return strdup(client_ip);
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
    char *n = FindKey(&req->Queries, "submit_email");
    char *from = FindKey(&req->Queries, "from_email");
    char *subj = FindKey(&req->Queries, "email_subject");
    char *msg = FindKey(&req->Queries, "email_msg");
    
    if((!n || !from) && req->RequestType.Is(&req->RequestType, "POST") && !req->Body.Contains(&req->Body, "submit_email")) {
        printf("Retrieving the rest of the POST data....!\n");

        char *BUFFER = (char *)calloc(4096, sizeof(char));
        int bytes = read(socket, BUFFER, 4096);
        BUFFER[bytes] = '\0';

        req->Body.Clear(&req->Body);
        req->Body.Set(&req->Body, BUFFER);
        GetPostQueries(server, req);

        n = FindKey(&req->Queries, "submit_email");
        from = FindKey(&req->Queries, "from_email");
        subj = FindKey(&req->Queries, "email_subject");
        msg = FindKey(&req->Queries, "email_msg");
        free(BUFFER);
    }


    if(n != NULL || from != NULL) {
        printf("[ + ] New Contact Info\nfrom: %s\nSubject: %s\nBody: %s\n", from, subj, msg);
        ContactBuffer.Clear(&ContactBuffer);
        ContactBuffer.AppendArray(&ContactBuffer, (const char *[]){"Email has been sent, Expect a reply within 48 hours sent to: ", from, " !", NULL});
        ContactBuffer.data[ContactBuffer.idx] = '\0';
    }

    // Ensure to set this buffer if it isnt already set
    if(((Control *)((Control *)((Control *)ContactForm.SubControls[2])->SubControls[1])->SubControls[8])->Text != ContactBuffer.data)
        ((Control *)((Control *)((Control *)ContactForm.SubControls[2])->SubControls[1])->SubControls[8])->Text = ContactBuffer.data;

    int check = ConstructTemplate(route, (Control *[]){&HeadControl, &ContactForm, NULL}, ContactCSS);
    if(!check)
        printf("[ - ] Error %d, Unable to build template....\n", check);

    SendResponse(server, socket, OK, Headers, ((Map){}), route->Template);
}

void RouteHandler(cWS *server, cWR *req, WebRoute *route, int socket) {
    char *user_ip = GetSocketIP(socket);

    char *chk = NULL;
    for(int i = 0; i < req->Headers.idx; i++) {
        if(!req->Headers.arr[i])
            break;

        if(strstr(((Key *)req->Headers.arr[i])->key, "CF-Connecting-IP") || strstr(((Key *)req->Headers.arr[i])->key, "cf-connecting-ip") || strstr(((Key *)req->Headers.arr[i])->key, "x-forwarded-for"))
            chk = ((Key *)req->Headers.arr[i])->value;
    }

    if(chk)
        printf("Sock IP: %s | CF IP: %s\n", user_ip, chk);
    else
        printf("Sock IP: %s | Unable to find Client IP through Cloudflare....!\n", user_ip);
    
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
    int check = ConstructTemplate(route, Controls, Style);
    if(check <= 0)
        printf("[ - ] Unable to construct template....!\n");

    SendResponse(server, socket, OK, Headers, ((Map){}), route->Template);
}