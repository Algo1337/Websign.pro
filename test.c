#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include <str.h>
#include <arr.h>
#include <map.h>
#include <Net/web.h>

Map headers = {0};
/* CreateControl Test */

void indexp(cWS *server, cWS *req, WebRoute *route, int sock) {
    CSS TextColor = (CSS){ .Class = "txt_color", .Selector = 1, .Data = (char *[]){
        "color: #ff0000",
        NULL
    }};

    Control *Head = CreateControl(HEAD_TAG, NULL, NULL, NULL, (Control *[]){
        CreateControl(TITLE_TAG, NULL, NULL, "Hi", NULL),
        NULL
    });

    Control *Body = CreateControl(BODY_TAG, NULL, NULL, NULL , (Control *[]){
        CreateControl(P_TAG, TextColor.Class, NULL, "Hello World", NULL),
        NULL
    });

    route->ConstructCHT(route, (Control *[]){Head, Body, NULL}, (CSS *[]){&TextColor, NULL});
    SendResponse(server, sock, OK, headers, ((Map){}), route->Template);
}

int main() {
    /* Set Default headers */
    headers = NewMap();
    headers.Append(&headers, "Content-Type", "text/html;charset=UTF-8");
    headers.Append(&headers, "Connection", "close");

    /* Initialize Webserver */
    cWS *server = StartWebServer(NewString(""), 50, 0);
    if(!server)
        return 1;

    /* Add a route */
    server->AddRoutes(server, (WebRoute *[]){
        CreateRoute("index", "/", indexp),
        NULL
    });

    /* Run the web server in background */
    server->Run(server, 999, 0);

    char BUFF[10];
    fgets(BUFF, 10, stdin);
    return 0;
}