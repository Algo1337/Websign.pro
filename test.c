#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include <str.h>
#include <arr.h>
#include <map.h>
#include <Net/web.h>

/* CreateControl Test */

void indexp(cWS *server, cWS *req, WebRoute *route, int sock) {
    Control *Head = CreateControl(HEAD_TAG, NULL, NULL, NULL, (Control *[]){
        CreateControl(TITLE_TAG, NULL, NULL, "Hi", NULL),
        NULL
    });

    Control *Body = CreateControl(BODY_TAG, NULL, NULL, NULL , (Control *[]){
        CreateControl(P_TAG, NULL, NULL, "Hello World", NULL),
        NULL
    });

    route->Controls = (Control *[]){Head, Body, NULL};
    int chk = ConstructTemplate(route, (Control *[]){Head, Body, NULL}, NULL);
    Map headers = NewMap();
    headers.Append(&headers, "Content-Type", "text/html;charset=UTF-8");
    headers.Append(&headers, "Connection", "close");

    SendResponse(server, sock, OK, headers, ((Map){}), route->Template);
}

int main() {
    cWS *server = StartWebServer(NewString(""), 80, 0);
    if(!server)
        return 1;

    server->AddRoute(server, (WebRoute){ .Name = "index", .Path = "/", .Handler = indexp });
    server->Run(server, 999, 0);

    char BUFF[10];
    fgets(BUFF, 10, stdin);
    return 0;
}