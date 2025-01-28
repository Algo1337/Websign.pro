#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include <str.h>
#include <arr.h>
#include <map.h>

#include <Net/web.h>

String CONTACT_RESULTS = {0};

/* Default Head Element */
Control HeadControl = { .Tag = HEAD_TAG, .SubControls = (void *[]){
        &(Control){ .Tag = TITLE_TAG, .Text = "Algo1337" },
        NULL
}};

CSS nav_bar_style = (CSS){ .Class = "nav_bar", .Selector = 1, .Data = (char *[]){
        "background-color: #24303a",
        "color: #fff",
        "width: 100%",
        "height: 70px",
        NULL
}};

CSS nav_title = (CSS){ .Class = "nav_title", .Selector = 1, .Data = (char *[]){
        "color: #1e78c6",
        "margin-left: 10px",
        "display: inline-block",
        "vertical-align: top",
        NULL
}};

CSS nav_opt_box = (CSS){ .Class = "nav_opt_box", .Selector = 1, .Data = (char *[]){
        "margin-left: 10px",
        "margin-top: 23px",
        "display: inline-block",
        NULL
}};

CSS nav_opt = (CSS){ .Class = "nav_opt", .Selector = 1, .Data = (char *[]){
        "width: 65px",
        "color: #fff",
        "border-radius: 15px",
        "align-items: center",
        "text-align: center",
        "padding: 8px",
        "margin-right: 10px",
        "display: inline-block",
        "transition: 1s",
        NULL
}};

CSS nav_opt_hover = (CSS){ .Class = "nav_opt:hover", .Selector = 1, .Data = (char *[]){
        "background-color: #50514e",
        NULL
}};

CSS centered_box = (CSS){ .Class = "centered_box", .Selector = 1, .Data = (char *[]){
        "background-color: #24303a",
        "color: #fff",
        "padding: 2px",
        "border: 1px solid white",
        "border-radius: 15px",
        "margin: auto",
        "margin-top: 20px",
        "top: 50%",
        "left: 50%",
        "width: 800px",
        "padding-bottom: 10px",
        NULL
}};

CSS box = (CSS){ .Class = "home_box", .Selector = 1, .Data = (char *[]){
        "background-color: #000",
        "border-radius: 15px",
        "color: #fff",
        "width: 750px",
        "margin-left: 20px",
        "margin-bottom: 20px",
        "padding-bottom: 5px",
        NULL
}};

CSS box_title_box = (CSS){ .Class = "box_title_box", .Selector = 1, .Data = (char *[]){
        "margin: auto",
        "background-color: #24303a",
        "border: 2px solid white",
        "border-radius: 15px",
        "width: 750px",
        NULL
}};

CSS box_txt = (CSS){ .Class = "box_txt", .Selector = 1, .Data = (char *[]){
        "margin-left: 15px",
        "margin-right: 10px",
        "font-size: 17",
        NULL
}};

CSS programming_list_box = (CSS){ .Class = "programming_list_box", .Selector = 1, .Data = (char *[]){
        "display: inline-block",
        "width: 60px",
        "height: 60px",
        "margin-left: 15px",
        NULL
}};

CSS H4_STYLE = (CSS){ .Class = "h4", .Selector = 1, .Data = (char *[]){
        "margin-left: 15px",
        "font-size: 18",
        "font-weight: bold",
        NULL
}};

CSS project_display = (CSS){ .Class = "project_display", .Selector = 1, .Data = (char *[]){
        "margin: 5px",
        "margin-top: 15px",
        "background-color: #4d4339",
        "border: 1px solid #24303a",
        "border-radius: 15px",
        "transition: 1s",
        NULL
}};

CSS project_display_hover = (CSS){ .Class = "project_display:hover", .Selector = 1, .Data = (char *[]){
        "background-color: #24303a",
        NULL
}};

CSS project_display_icon = (CSS){ .Class = "project_display_icon", .Selector = 1, .Data = (char *[]){
        "margin-left: 15px",
        "margin-top: 3.5px",
        "width: 50px",
        "height: 50px",
        "display: inline-block",
        "vertical-align: top",
        NULL
}};

CSS project_display_title = (CSS){ .Class = "project_display_title", .Selector = 1, .Data = (char *[]){
        "background-color: #ffc896",
        "border-radius: 15px",
        "justify-content: top",
        "color: #000",
        "width: 99%",
        "padding: 4px",
        "display: inline-block",
        NULL
}};

CSS redirect_btn = (CSS){ .Class = "take_me_there_btn", .Selector = 1, .Data = (char *[]){
        "margin-left: 15px",
        "margin-top: 15px",
        "background-color: green",
        "border: 2px solid white",
        "border-radius: 15px",
        "width: 120px",
        "padding: 5px",
        "align-items: center",
        "text-align: center",
        "margin-bottom: 15px",
        NULL
}};

CSS social_img = (CSS){ .Class = "social_img", .Selector = 1, .Data = (char *[]){
        "width: 45px",
        "height: 45px",
        NULL
}};

CSS txtbox = (CSS){ .Class = "txtbox", .Selector = 1, .Data = (char *[]){
        "margin-left: 15px",
        "background-color: #000",
        "color: #fff",
        "border: 2px solid white",
        "border-radius: 15px",
        "width: 710px",
        "padding: 2px",
        "font-size: 17px",
        NULL
}};

CSS email_btn = (CSS){ .Class = "email_btn", .Selector = 1, .Data = (char *[]){
        "background-color: #24303a",
        "color: #fff",
        "border: 2px solid white",
        "border-radius: 15px",
        "margin-left: 15px",
        "margin-top: 15px",
        "margin-bottom: 10px",
        "width: 710px",
        "padding: 5px",
        NULL
}};

/* Default Navigation Bar Element */
Control NavBarCHT = { .Tag = DIV_TAG, .Class = "nav_bar", .SubControls = (void *[]){
        &(Control){ .Tag = H1_TAG, .Class = "nav_title", .Text = "Algo" },
        &(Control){ .Tag = DIV_TAG, .Class = "nav_opt_box", .SubControls = (void *[]){
                &(Control){ .Tag = A_TAG, .href = "/", .SubControls = (void *[]){
                        &(Control){ .Tag = DIV_TAG, .Class = "nav_opt", .Text = "Home" },
                        NULL
                }},
                &(Control){ .Tag = A_TAG, .href = "/projects", .SubControls = (void *[]){
                        &(Control){ .Tag = DIV_TAG, .Class = "nav_opt", .Text = "Projects" },
                        NULL
                }},
                &(Control){ .Tag = A_TAG, .href = "https://github.com/algo1337", .SubControls = (void *[]){
                        &(Control){ .Tag = DIV_TAG, .Class = "nav_opt", .Text = "Github" },
                        NULL
                }},
                &(Control){ .Tag = A_TAG, .href = "/contact", .SubControls = (void *[]){
                        &(Control){ .Tag = DIV_TAG, .Class = "nav_opt", .Text = "Contact" },
                        NULL,
                }},
                NULL
        }},
        NULL
}};

/* Default Body Settings */
Control BodyControl = { .Tag = BODY_TAG, .CSS = (char *[]){"background-color: #000;", "color: #fff;", "margin: 0;", NULL} };

void contact_page(cWS *server, cWR* req, WebRoute *route, int socket) {
        Control body = BodyControl;
        body.SubControls = (void *[]){
                &NavBarCHT,
                &(Control){ .Tag = DIV_TAG, .Class = "centered_box", .SubControls = (void *[]){
                        &(Control){ .Tag = H2_TAG, .CSS = (char *[]){"margin-left: 20px", NULL}, .Text = "Contact" },
                        &(Control){ .Tag = DIV_TAG, .Class = "home_box", .SubControls = (void *[]){
                                &(Control){ .Tag = DIV_TAG, .Class = "box_title_box", .SubControls = (void *[]){
                                        &(Control){ .Tag = H2_TAG, .Class = "box_txt h4", .Text = "List Of Social Media" },
                                        NULL
                                }},
                                &(Control){ .Tag = DIV_TAG, .CSS = (char *[]){"margin-top: 20px", NULL} },
                                /* Github Social Link */
                                &(Control){ .Tag = A_TAG, .href = "https://github.com/algo1337", .CSS = (char *[]){"text-decoration: none;", "color: #fff;", NULL}, .SubControls = (void *[]){
                                        &(Control){ .Tag = DIV_TAG, .CSS = (char *[]){"width: 135px;", "margin-left: 15px;", "margin-top: 10px;", "display: grid;", "grid-template-columns: repeat(2, 1fr);", "gap: 2px;", NULL}, .SubControls = (void *[]){
                                                &(Control){ .Tag = IMG_TAG, .Class = "social_img", .Data = "src=\"https://puu.sh/KnahB/5b73494620.png\"" },
                                                &(Control){ .Tag = P_TAG, .Class = "social_link", .Text = "@Algo1337" },
                                                NULL
                                        }},
                                        NULL
                                }},
                                /* X Social Link */
                                &(Control){ .Tag = A_TAG, .href = "https://x.com/algo1337", .CSS = (char *[]){"text-decoration: none;", "color: #fff;", NULL}, .SubControls = (void *[]){
                                        &(Control){ .Tag = DIV_TAG, .CSS = (char *[]){"width: 135px;", "margin-left: 15px;", "margin-top: 10px;", "display: grid;", "grid-template-columns: repeat(2, 1fr);", "gap: 2px;", NULL}, .SubControls = (void *[]){
                                                &(Control){ .Tag = IMG_TAG, .Class = "social_img", .Data = "src=\"https://upload.wikimedia.org/wikipedia/commons/thumb/5/5a/X_icon_2.svg/1483px-X_icon_2.svg.png\"" },
                                                &(Control){ .Tag = P_TAG, .Class = "social_link", .Text = "@Algo1337" },
                                                NULL
                                        }},
                                        NULL
                                }},
                                /* YT Social Link */
                                &(Control){ .Tag = A_TAG, .href = "https://www.youtube.com/channel/UC7l8JtADVjad36FkjFfytPg", .CSS = (char *[]){"text-decoration: none;", "color: #fff;", NULL}, .SubControls = (void *[]){
                                        &(Control){ .Tag = DIV_TAG, .CSS = (char *[]){"width: 135px;", "margin-left: 15px;", "margin-top: 10px;", "display: grid;", "grid-template-columns: repeat(2, 1fr);", "gap: 2px;", NULL}, .SubControls = (void *[]){
                                                &(Control){ .Tag = IMG_TAG, .Class = "social_img", .Data = "src=\"https://cdn-icons-png.flaticon.com/512/174/174883.png\"" },
                                                &(Control){ .Tag = P_TAG, .Class = "social_link", .Text = "@Algo1337" },
                                                NULL
                                        }},
                                        NULL
                                }},
                                /* Email */
                                &(Control){ .Tag = A_TAG, .href = "mailto:intensesec@gmail.com", .CSS = (char *[]){"text-decoration: none;", "color: #fff;", NULL}, .SubControls = (void *[]){
                                        &(Control){ .Tag = DIV_TAG, .CSS = (char *[]){"width: 135px;", "margin-left: 15px;", "margin-top: 10px;", "display: grid;", "grid-template-columns: repeat(2, 1fr);", "gap: 2px;", NULL}, .SubControls = (void *[]){
                                                &(Control){ .Tag = IMG_TAG, .Class = "social_img", .Data = "src=\"https://cdn4.iconfinder.com/data/icons/social-media-logos-6/512/112-gmail_email_mail-512.png\"" },
                                                &(Control){ .Tag = P_TAG, .Class = "social_link", .Text = "intensesec@gmail.com" },
                                                NULL
                                        }},
                                        NULL
                                }},
                                NULL
                        }},
                        NULL
                }},
                &(Control){ .Tag = DIV_TAG, .Class = "home_box", .SubControls = (void *[]){
                        &(Control){ .Tag = DIV_TAG, .Class = "box_title_box", .SubControls = (void *[]){
                                &(Control){ .Tag = H2_TAG, .Class = "box_txt h4", .Text = "Contact Form" },
                                NULL
                        }},
                        &(Control){ .Tag = FORM_TAG, .Data = "method=\"post\"", .SubControls = (void *[]){
                                &(Control){ .Tag = P_TAG, .Class = "box_txt", .Text = "Fill out this form to email me directly from here!" },
                                &(Control){ .Tag = P_TAG, .Class = "box_txt", .Text = "From Email:" },
                                &(Control){ .Tag = INPUT_TAG, .ID = "from_email", .Type = "text", .Class = "txtbox", .Data = "name=\"from_email\" placeholder=\"email@domain.com\"" },
                                &(Control){ .Tag = P_TAG, .Class = "box_txt", .Text = "Subject:" },
                                &(Control){ .Tag = INPUT_TAG, .ID = "email_subject", .Type = "text", .Class = "txtbox", .Data = "name=\"email_subject\" placeholder=\"Subject\"" },
                                &(Control){ .Tag = P_TAG, .Class = "box_txt", .Text = "Message:" },
                                &(Control){ .Tag = INPUT_TAG, .ID = "email_msg", .Type = "text", .Class = "txtbox", .CSS = (char *[]){"height: 50px", NULL}, .Data = "name=\"email_msg\" placeholder=\"Message\"" },
                                &(Control){ .Tag = INPUT_TAG, .Type = "submit", .ID = "submit_email", .Data = "name=\"submit_email\" value=\"Send Email\"", .Class = "email_btn" },
                                &(Control){ .Tag = P_TAG, .ID = "results", .Class = "box_txt", .Data = "name=\"results\"" },
                                NULL
                        }},
                        NULL
                }},
                NULL
        };

        String Email = {0}, Subject = {0}, Message = {0};
        CONTACT_RESULTS.Clear(&CONTACT_RESULTS);

        if(req->Headers.Get(&req->Headers, "submit_email")) {
                for(int i = 0; i < req->Headers.idx; i++) {
                        if(strstr(((Key *)req->Headers.arr[i])->key, "from_email"))
                                Email = NewString(((Key *)req->Headers.arr[i])->value);

                        if(strstr(((Key *)req->Headers.arr[i])->key, "email_subject"))
                                Subject = NewString(((Key *)req->Headers.arr[i])->value);

                        if(strstr(((Key *)req->Headers.arr[i])->key, "email_msg"))
                                Message = NewString(((Key *)req->Headers.arr[i])->value);
                }

                if(Email.idx == 0 || Subject.idx == 0 || Message.idx == 0)
                {
                        CONTACT_RESULTS.AppendString(&CONTACT_RESULTS, "You must fill out the form!");
                } else {
                        printf("Email: %s | Subject: %s | Message: %s\n", Email.data, Subject.data, Message.data);
                        CONTACT_RESULTS.AppendString(&CONTACT_RESULTS, "Email Send, You shall recieve an email within 48 hours!");
                }
        }
        ((Control *)((Control *)((Control *)body.SubControls[2])->SubControls[1])->SubControls[8])->Text = CONTACT_RESULTS.data;


        int chk = ConstructTemplate(route, (Control *[]){
                &HeadControl,
                &body,
                NULL
        }, (CSS *[]){
                &nav_bar_style,
                &nav_title,
                &nav_opt_box,
                &nav_opt,
                &nav_opt_hover,
                &centered_box,
                &box,
                &box_title_box,
                &box_txt,
                &H4_STYLE,
                &social_img,
                &txtbox,
                &email_btn,
                NULL
        });

        if(chk <= 0)
        {
                printf("[ - ] Warning, Unable to construct template...!");
        }
}

void projects_list(cWS *server, cWR *req, WebRoute *route, int socket) {
        Control body = BodyControl;
        body.SubControls = (void *[]){
                &NavBarCHT,
                &(Control){ .Tag = DIV_TAG, .Class = "centered_box", .SubControls = (void *[]){
                &(Control){ .Tag = H2_TAG, .CSS = (char *[]){"margin-left: 20px", NULL}, .Text = "Projects" },
                &(Control){ .Tag = DIV_TAG, .Class = "project_display", .SubControls = (void *[]){
                                &(Control){ .Tag = DIV_TAG, .Class = "project_display_title", .SubControls = (void *[]){
                                        &(Control){ .Tag = IMG_TAG, .Class = "project_display_icon", .Data = "src=\"https://avatars.githubusercontent.com/u/192834162?s=200&v=4\"" },
                                        &(Control){ .Tag = P_TAG, .Class = "box_txt h4", .CSS = (char *[]){"display: inline-block", NULL}, .Text = "Websign Framework" },
                                        NULL
                                }},
                                &(Control){ .Tag = P_TAG, .Class = "box_txt h4", .Text = "What is Websign?" },
                                &(Control){ .Tag = P_TAG, .Class = "box_txt", .Text = "Websign is a web-server and browser SDK built-in the server to generate and parse HTML, CSS and WebJS" },
                                &(Control){ .Tag = A_TAG, .CSS = (char *[]){"text-decoration: none", "color: #fff", NULL}, .href = "https://github.com/clibplus/Net", .SubControls = (void *[]){
                                        &(Control){ .Tag = P_TAG, .Class = "box_txt", .CSS = (char *[]){"color: #fff", NULL}, .Text = "[GITHUB] Source Code" },
                                        NULL
                                }},
                                NULL
                        }},
                        &(Control){ .Tag = DIV_TAG, .Class = "project_display", .SubControls = (void *[]){
                                &(Control){ .Tag = DIV_TAG, .Class = "project_display_title", .SubControls = (void *[]){
                                        &(Control){ .Tag = IMG_TAG, .Class = "project_display_icon", .Data = "src=\"https://avatars.githubusercontent.com/u/192834162?s=200&v=4\"" },
                                        &(Control){ .Tag = P_TAG, .Class = "box_txt h4", .CSS = (char *[]){"display: inline-block", NULL}, .Text = "Websign.py" },
                                        NULL
                                }},
                                &(Control){ .Tag = P_TAG, .Class = "box_txt h4", .Text = "What is Websign.py?" },
                                &(Control){     .Tag = P_TAG, .Class = "box_txt", .Text = "A python ported version of Websign" },
                                &(Control){ .Tag = A_TAG, .CSS = (char *[]){"text-decoration: none", NULL}, .href = "#", .SubControls = (void *[]){
                                        &(Control){ .Tag = P_TAG, .Class = "box_txt", .CSS = (char *[]){"color: #fff", NULL}, .Text = "[PRIVATE SOURCE CODE]" },
                                        NULL
                                }},
                                NULL
                        }},
                        &(Control){ .Tag = DIV_TAG, .Class = "project_display", .SubControls = (void *[]){
                                &(Control){ .Tag = DIV_TAG, .Class = "project_display_title", .SubControls = (void *[]){
                                        &(Control){ .Tag = IMG_TAG, .Class = "project_display_icon", .Data = "src=\"https://icons.iconarchive.com/icons/papirus-team/papirus-mimetypes/128/text-x-script-icon.png\"" },
                                        &(Control){ .Tag = P_TAG, .Class = "box_txt h4", .CSS = (char *[]){"display: inline-block", NULL}, .Text = "cLib+" },
                                        NULL
                                }},
                                &(Control){ .Tag = P_TAG, .Class = "box_txt h4", .Text = "What is cLib+?" },
                                &(Control){ .Tag = P_TAG, .Class = "box_txt", .Text = "cLib+ is a project specializing in creating high-level C library by abstracting low-level operations" },
                                &(Control){ .Tag = A_TAG, .CSS = (char *[]){"text-decoration: none", NULL}, .href = "https://github.com/clibplus", .SubControls = (void *[]){
                                        &(Control){ .Tag = P_TAG, .Class = "box_txt", .CSS = (char *[]){"color: #fff", NULL}, .Text = "[GITHUB] Organization" },
                                        NULL
                                }},
                                NULL
                        }},
                        &(Control){ .Tag = H2_TAG, .CSS = (char *[]){"margin-left: 20px", NULL}, .Text = "Inactive / Previous Projects" },
                        &(Control){ .Tag = DIV_TAG, .Class = "project_display", .SubControls = (void *[]){
                                &(Control){ .Tag = DIV_TAG, .Class = "project_display_title", .SubControls = (void *[]){
                                        &(Control){ .Tag = IMG_TAG, .Class = "project_display_icon", .Data = "src=\"https://avatars.githubusercontent.com/u/179827981?s=200&v=4\"" },
                                        &(Control){ .Tag = P_TAG, .Class = "box_txt h4", .CSS = (char *[]){"display: inline-block", NULL}, .Text = "ExLayer v8.0" },
                                        NULL
                                }},
                                &(Control){ .Tag = P_TAG, .Class = "box_txt h4", .Text = "What is ExLayer?" },
                                &(Control){ .Tag = P_TAG, .Class = "box_txt", .Text = "Network Protection Application, Monitor's Network and System Resource Usage to pervent overloads from happening! Originally named Cyber Shield when launched." },
                                &(Control){ .Tag = A_TAG, .CSS = (char *[]){"text-decoration: none", NULL}, .href = "#", .SubControls = (void *[]){
                                        &(Control){ .Tag = P_TAG, .Class = "box_txt", .CSS = (char *[]){"color: #fff", NULL}, .Text = "[PRIVATE SOURCE CODE]" },
                                        NULL
                                }},
                                NULL
                        }},
                        NULL
                }},
                NULL
        };

        int chk = ConstructTemplate(route, (Control *[]){
                &HeadControl,
                &body,
                NULL
        }, (CSS *[]){
                &nav_bar_style,
                &nav_title,
                &nav_opt_box,
                &nav_opt,
                &nav_opt_hover,
                &centered_box,
                &box,
                &box_title_box,
                &box_txt,
                &H4_STYLE,
                &project_display,
                &project_display_hover,
                &project_display_title,
                &project_display_icon,
                &redirect_btn,
                NULL
        });
        if(chk <= 0) {
                printf("[ - ] Warning, Unable to construct template...!\n");
        }
}

void index_designer(cWS *server, cWR *req, WebRoute *route, int socket) {

        /* Deplicate Using the Default Body (For its settings/css) */
        Control body = BodyControl;
        body.SubControls = (void *[]){
                &NavBarCHT,
                (void *)(&(Control){ .Tag = DIV_TAG, .Class = "centered_box", .SubControls = (void *[]){
                        &(Control){ .Tag = H2_TAG, .CSS = (char *[]){"margin-left: 20px", NULL}, .Text = "Home" },
                        &(Control){ .Tag = DIV_TAG, .Class = "home_box", .SubControls = (void *[]){
                                &(Control){ .Tag = DIV_TAG, .Class = "box_title_box", .SubControls = (void *[]){
                                        &(Control){ .Tag = H3_TAG, .CSS = (char *[]){"margin-left: 15px", NULL}, .Text = "About Me" },
                                        NULL
                                }},
                                &(Control){ .Tag = P_TAG, .Class = "box_txt", .Text = "Hi, I'm Luis, also go by 'algo' or 'algo1337' online! A daily software engineer @ home specializing in low level system development, compilers, web development and reverse engineering with 15 years in general computer science located in Nashville, TN!" },
                                &(Control){ .Tag = P_TAG, .Class = "box_txt h4", .Text = "Current Projects: "},
                                &(Control){ .Tag = P_TAG, .Class = "box_txt", .Text = "- Currently building Websign, A framework that serves as close a browser SDK constructing templates with structs written in C!" },
                                &(Control){ .Tag = P_TAG, .Class = "box_txt", .Text = "- Gardening quality food crops for self sustainability and profits" },
                                &(Control){ .Tag = P_TAG, .Class = "box_txt h4", .Text = "Current Goals: "},
                                &(Control){ .Tag = P_TAG, .Class = "box_txt", .Text = "- Securing arces of land to create a farm and decomposition station to live on for long-term business and high-technology machinery equipment research" },
                                NULL
                        }},
                        &(Control){ .Tag = DIV_TAG, .Class = "home_box", .SubControls = (void *[]){
                                &(Control){ .Tag = DIV_TAG, .Class = "box_title_box", .SubControls = (void *[]){
                                        &(Control){ .Tag = H3_TAG, .CSS = (char *[]){"margin-left: 15px", NULL}, .Text = "Technology Stack" },
                                        NULL
                                }},
                                &(Control){ .Tag = P_TAG, .Class = "box_txt h4", .Text = "Programming languages: "},
                                &(Control){ .Tag = IMG_TAG, .Class = "programming_list_box", .Data = "src=\"https://upload.wikimedia.org/wikipedia/commons/thumb/1/18/C_Programming_Language.svg/926px-C_Programming_Language.svg.png\"" },
                                &(Control){ .Tag = IMG_TAG, .Class = "programming_list_box", .Data = "src=\"https://cdn3.iconfinder.com/data/icons/logos-and-brands-adobe/512/267_Python-512.png\"" },
                                &(Control){ .Tag = IMG_TAG, .Class = "programming_list_box", .Data = "src=\"https://www.php.net/images/logos/new-php-logo.png\"" },
                                &(Control){ .Tag = IMG_TAG, .Class = "programming_list_box", .Data = "src=\"https://static-00.iconduck.com/assets.00/c-sharp-c-icon-912x1024-j3yidw37.png\"" },
                                &(Control){ .Tag = IMG_TAG, .Class = "programming_list_box", .Data = "src=\"https://vlang.io/img/v-logo.png\"" },
                                &(Control){ .Tag = P_TAG, .Class = "box_txt", .Text = "This website is created completely in C using Websign!" },
                                &(Control){ .Tag = P_TAG, .Class = "box_txt h4", .Text = "Environment Setup: " },
                                &(Control){ .Tag = IMG_TAG, .Class = "programming_list_box", .Data = "src=\"https://uxwing.com/wp-content/themes/uxwing/download/brands-and-social-media/windows-11-logo-icon.png\"" },
                                &(Control){ .Tag = IMG_TAG, .Class = "programming_list_box", .Data = "src=\"https://upload.wikimedia.org/wikipedia/commons/d/d5/Virtualbox_logo.png\"" },
                                &(Control){ .Tag = IMG_TAG, .Class = "programming_list_box", .Data = "src=\"https://miro.medium.com/v2/resize:fit:620/0*eh9s3MEPp_iXWeph\" alt=\"ubuntu 22.04\"" },
                                &(Control){ .Tag = IMG_TAG, .Class = "programming_list_box", .Data = "src=\"https://img.icons8.com/color/512/bash.png\"" },
                                NULL
                        }},
                        &(Control){ .Tag = DIV_TAG, .Class = "home_box", .SubControls = (void *[]){
                                &(Control){ .Tag = DIV_TAG, .Class = "box_title_box", .SubControls = (void *[]){
                                        &(Control){ .Tag = H3_TAG, .CSS = (char *[]){"margin-left: 15px", NULL}, .Text = "Projects" },
                                        NULL
                                }},
                                &(Control){ .Tag = P_TAG, .Class = "box_txt h4", .Text = "Current Projects: " },
                                &(Control){ .Tag = DIV_TAG, .Class = "project_display", .SubControls = (void *[]){
                                        &(Control){ .Tag = DIV_TAG, .Class = "project_display_title", .SubControls = (void *[]){
                                                &(Control){ .Tag = IMG_TAG, .Class = "project_display_icon", .Data = "src=\"https://avatars.githubusercontent.com/u/192834162?s=200&v=4\"" },
                                                &(Control){ .Tag = P_TAG, .Class = "box_txt h4", .CSS = (char *[]){"display: inline-block", NULL}, .Text = "Websign Framework" },
                                                NULL
                                        }},
                                        &(Control){ .Tag = P_TAG, .Class = "box_txt h4", .Text = "What is Websign?" },
                                        &(Control){ .Tag = P_TAG, .Class = "box_txt", .Text = "Websign is a web-server and browser SDK built-in the server to generate and parse HTML, CSS and WebJS" },
                                        &(Control){ .Tag = A_TAG, .CSS = (char *[]){"text-decoration: none", "color: #fff", NULL}, .href = "https://github.com/clibplus/Net", .SubControls = (void *[]){
                                                &(Control){ .Tag = P_TAG, .Class = "box_txt", .CSS = (char *[]){"color: #fff", NULL}, .Text = "[GITHUB] Source Code" },
                                                NULL
                                        }},
                                        NULL
                                }},
                                &(Control){ .Tag = DIV_TAG, .Class = "project_display", .SubControls = (void *[]){
                                        &(Control){ .Tag = DIV_TAG, .Class = "project_display_title", .SubControls = (void *[]){
                                                &(Control){ .Tag = IMG_TAG, .Class = "project_display_icon", .Data = "src=\"https://icons.iconarchive.com/icons/papirus-team/papirus-mimetypes/128/text-x-script-icon.png\"" },
                                                &(Control){ .Tag = P_TAG, .Class = "box_txt h4", .CSS = (char *[]){"display: inline-block", NULL}, .Text = "cLib+" },
                                                NULL
                                        }},
                                        &(Control){ .Tag = P_TAG, .Class = "box_txt h4", .Text = "What is cLib+?" },
                                        &(Control){ .Tag = P_TAG, .Class = "box_txt", .Text = "cLib+ is a project specializing in creating high-level C library by abstracting low-level operations" },
                                        &(Control){ .Tag = A_TAG, .CSS = (char *[]){"text-decoration: none", "color: #fff", NULL}, .href = "https://github.com/clibplus", .SubControls = (void *[]){
                                                &(Control){ .Tag = P_TAG, .Class = "box_txt", .CSS = (char *[]){"color: #fff", NULL},  .Text = "[GITHUB] Organization" },
                                        }},
                                        NULL
                                }},
                                &(Control){ .Tag = DIV_TAG, .Class = "box_txt h4", .CSS = (char *[]){"margin-top: 15px", NULL}, .Text = "Full list on the projects tab!" },
                                &(Control){ .Tag = A_TAG, .CSS = (char *[]){"margin-left: 15px;", "margin-top: 15px;", "text-decoration: none;", "color: #fff;", NULL}, .href = "/projects", .SubControls = (void *[]){
                                        &(Control){ .Tag = DIV_TAG, .Class = "take_me_there_btn", .Text = "Take me there!" },
                                        NULL
                                }},
                                NULL
                        }},
                        NULL
                }}),
                NULL
        };


        int chk = ConstructTemplate(route, (Control *[]){
                &HeadControl,
                &body,
                NULL
        }, (CSS *[]){
                &nav_bar_style,
                &nav_title,
                &nav_opt_box,
                &nav_opt,
                &nav_opt_hover,
                &centered_box,
                &box,
                &box_title_box,
                &box_txt,
                &programming_list_box,
                &H4_STYLE,
                &project_display,
                &project_display_title,
                &project_display_icon,
                &redirect_btn,
                NULL
        });

        if(chk <= 0) {
                printf("[ - ] Warning, Unable to construct template....!\n");
        }
}

void index_handler(cWS *server, cWR *req, WebRoute *route, int socket) {
        Map headers = NewMap();
        headers.Append(&headers, "Content-Type", "text/html; charset=UTF-8");
        headers.Append(&headers, "Connection", "close");

        SendResponse(server, socket, OK, headers, ((Map){}), route->Template);
}

int main() {
        String IP = NewString("");
        CONTACT_RESULTS = NewString(NULL);

        cWS *server = StartWebServer(IP, 80, 0);
        if(!server)
        {
                printf("[ - ] Error, Unable to start web server....!\n");
                return 1;
        }

        server->CFG.Err404 = "Err404";
        server->AddRoutes(server, (WebRoute *[]){
                &(WebRoute){
                        .Name = "index",
                        .Path = "/",
                        .Handler = index_handler,
                        .Generator = index_designer,
                        .ReadOnly = 0
                },
                &(WebRoute){
                        .Name = "projects",
                        .Path = "/projects",
                        .Handler = index_handler,
                        .Generator = projects_list,
                        .ReadOnly = 0
                },
                &(WebRoute){
                        .Name = "contact",
                        .Path = "/contact",
                        .Handler = index_handler,
                        .Generator = contact_page,
                        .ReadOnly = 0
                },
                NULL
        });

        server->Run(server, 999, 0);

        char BUFFER[100];
        fgets(BUFFER, 100, stdin);
        return 0;
}
