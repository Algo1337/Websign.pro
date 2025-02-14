#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "../algo.h"

/* Default Head Element */
Control HeadControl = { .Tag = HEAD_TAG, .SubControlCount = 1, .SubControls = (void *[]){
        &(Control){ .Tag = TITLE_TAG, .Text = "Algo1337" },
        NULL
}};

/* Default Navigation Bar Element */
Control NavBarCHT = { .Tag = DIV_TAG, .Class = "nav_bar", .SubControlCount = 2, .SubControls = (void *[]){
        &(Control){ .Tag = H1_TAG, .Class = "nav_title", .Text = "Algo" },
        &(Control){ .Tag = DIV_TAG, .Class = "nav_opt_box", .SubControlCount = 5, .SubControls = (void *[]){
                &(Control){ .Tag = A_TAG, .href = "/", .SubControlCount = 1, .SubControls = (void *[]){
                        &(Control){ .Tag = DIV_TAG, .Class = "nav_opt", .Text = "Home" },
                        NULL
                }},
                &(Control){ .Tag = A_TAG, .href = "/projects", .SubControlCount = 1, .SubControls = (void *[]){
                        &(Control){ .Tag = DIV_TAG, .Class = "nav_opt", .Text = "Projects" },
                        NULL
                }},
                &(Control){ .Tag = A_TAG, .href = "/services", .SubControlCount = 1, .SubControls = (void *[]){
                        &(Control){ .Tag = DIV_TAG, .Class = "nav_opt", .Text = "Services" },
                        NULL
                }},
                &(Control){ .Tag = A_TAG, .href = "https://github.com/algo1337", .SubControlCount = 1, .SubControls = (void *[]){
                        &(Control){ .Tag = DIV_TAG, .Class = "nav_opt", .Text = "Github" },
                        NULL
                }},
                &(Control){ .Tag = A_TAG, .href = "/contact", .SubControlCount = 1, .SubControls = (void *[]){
                        &(Control){ .Tag = DIV_TAG, .Class = "nav_opt", .Text = "Contact" },
                        NULL,
                }},
                &(Control){ .Tag = A_TAG, .href = "/login", .SubControlCount = 1, .SubControls = (void *[]){
                        &(Control){ .Tag = DIV_TAG, .Class = "login_btn", .Text = "Login" },
                        NULL
                }},
                NULL
        }},
        NULL
}};


/* Default Body Settings */
Control BodyControl = { .Tag = BODY_TAG, .CSS = (char *[]){"background-color: #000;", "color: #fff;", "margin: 0;", NULL} };