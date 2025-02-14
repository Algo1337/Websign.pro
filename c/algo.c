#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include <str.h>
#include <map.h>
#include <OS/file.h>
#include "algo.h"

String IP_ADDR = {0};
Map DefaultHeaders;

int main() {
    ContactBuffer = NewString(NULL);
    SetupHeaders();
    IP_ADDR = NewString("");
    
    MyApp *app = StartApp(IP_ADDR, 80);
    if(!app->Server)
    {
        printf("[ - ] Error, Unable to start web server....!\n");
        return 1;
    }

    app->Server->CFG.Err404_Handler = RouteHandler;
    app->Server->AddRoutes(app->Server, (WebRoute *[]){
        &(WebRoute){ .Name = "index", .Path = "/", .Handler = RouteHandler },
        &(WebRoute){ .Name = "projects", .Path = "/projects", .Handler = RouteHandler, .ReadOnly = 0 },
        &(WebRoute){ .Name = "services", .Path = "/services", .Handler = RouteHandler },
        &(WebRoute){ .Name = "contact", .Path = "/contact", .Handler = ContactFormHandler, .ReadOnly = 0 },
        &(WebRoute){ .Name = "login", .Path = "/login", .Handler = RouteHandler },
        &(WebRoute){ .Name = "user_dashboard", .Path = "/user/", .Handler = RouteHandler },
        NULL
    });

    app->Server->Run(app->Server, 999, 0);

    char BUFFER[100];
    fgets(BUFFER, 100, stdin);
    return 0;
}
