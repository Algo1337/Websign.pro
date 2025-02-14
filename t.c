#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include <str.h>
#include <arr.h>
#include <map.h>
#include <Net/web.h>

/* CreateControl Test */

Control Head = (Control){ .Tag = HEAD_TAG, .SubControlCount = 1, .SubControls = (void *[]){
    &(Control){ .Tag = TITLE_TAG, .Text = "Hello WOrd" },
    NULL
}};

Control Body = (Control){ .Tag = BODY_TAG, .SubControlCount = 1, .SubControls = (void *[]){
    &(Control){ .Tag = FORM_TAG, .Data = "method=\"post\"", .SubControlCount = 2, .SubControls = (void *[]){
        &(Control){ .Tag = INPUT_TAG, .ID = "testing_input", .Data = "name=\"testing_input\" placeholder=\"test field\"" },
        &(Control){ .Tag = INPUT_TAG, .Type = "submit", .ID = "submit_btn", .Data = "name=\"submit_btn\" value=\"Apply\"" },
        NULL
    }},
    NULL
}};

void indexp(cWS *server, cWS *req, WebRoute *route, int sock) {
    int chk = ConstructTemplate(route, (Control *[]){&Head, &Body, NULL}, NULL);
    Map headers = NewMap();
    headers.Append(&headers, "Content-Type", "text/html;charset=UTF-8");
    headers.Append(&headers, "Connection", "close");

    SendResponse(server, sock, OK, headers, ((Map){}), route->Template);
}

int main() {
    cWS *server = StartWebServer(NewString(""), 60, 0);
    if(!server)
        return 1;

    server->AddRoute(server, (WebRoute){ .Name = "index", .Path = "/", .Handler = indexp });
    server->Run(server, 999, 0);

    char BUFF[10];
    fgets(BUFF, 10, stdin);
    return 0;
}