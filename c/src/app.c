#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "../algo.h"

MyApp *StartApp(String ip, int p) {
    MyApp *app = (MyApp *)malloc(sizeof(MyApp));
    *app = (MyApp){
        .IP = ip,
        .Port = p,
        .Server = StartWebServer(ip, p, 0)
    };

    return app;
}

void DestroyApp(MyApp *app) {
    if(app->IP.data != NULL)
        app->IP.Destruct(&app->IP);

    if(app->Server->Socket > 0)
        app->Server->Destruct(app->Server);

    free(app);
}