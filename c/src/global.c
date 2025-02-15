#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include <Net/web.h>
#include "../algo.h"

CSS *IndexCSS[] = (CSS *[]){
    &nav_bar_style,
    &nav_title,
    &nav_opt_box,
    &nav_opt,
    &nav_opt_hover,
    &LoginBtn,
    &LoginBtnHover,
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
    &programming_list_box,
    NULL
};

CSS *ProjectCSS[] = (CSS *[]){
    &nav_bar_style,
    &nav_title,
    &nav_opt_box,
    &nav_opt,
    &nav_opt_hover,
    &LoginBtn,
    &LoginBtnHover,
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
    &programming_list_box,
    NULL
};

CSS *ContactCSS[] = (CSS *[]){
    &nav_bar_style,
    &nav_title,
    &nav_opt_box,
    &nav_opt,
    &nav_opt_hover,
    &LoginBtn,
    &LoginBtnHover,
    &centered_box,
    &box,
    &box_title_box,
    &box_txt,
    &H4_STYLE,
    &social_img,
    &txtbox,
    &email_btn,
    NULL
};

CSS *LoginCSS[] = (CSS *[]){
    &nav_bar_style,
    &nav_title,
    &nav_opt_box,
    &nav_opt,
    &nav_opt_hover,
    &LoginBtn,
    &LoginBtnHover,
    &centered_box,
    &box,
    &box_title_box,
    &box_txt,
    &H4_STYLE,
    &social_img,
    &txtbox,
    &email_btn,
    &cLoginForm,
    &LoginTitle,
    &LoginTxtbox,
    &SigninBtn,
    NULL
};

CSS *UserDashboardCSS[] = (CSS *[]){
    &nav_bar_style,
    &nav_title,
    &nav_opt_box,
    &nav_opt,
    &nav_opt_hover,
    &LoginBtn,
    &LoginBtnHover,
    &SideBar,
    &SideBarTitle,
    &SideBarOpt,
    &SideBarOptHover,
    &UserImg,
    &UserBox,
    &UserWelTitle,
    &UserBoxTxt,
    &EditAccBtn,
    &RightSideBar,
    NULL
};

CSS *StoreCSS[] = (CSS *[]){
    &nav_bar_style,
    &nav_title,
    &nav_opt_box,
    &nav_opt,
    &nav_opt_hover,
    &LoginBtn,
    &LoginBtnHover,
    &centered_box,
    &box,
    &box_title_box,
    &box_txt,
    &H4_STYLE,
    &ServiceDisplay,
    NULL
};

CSS *OrdersCSS[] = (CSS *[]){
    &nav_bar_style,
    &nav_title,
    &nav_opt_box,
    &nav_opt,
    &nav_opt_hover,
    &LoginBtn,
    &LoginBtnHover,
    &SideBar,
    &SideBarTitle,
    &SideBarOpt,
    &SideBarOptHover,
    &UserImg,
    &UserBox,
    &UserWelTitle,
    &UserBoxTxt,
    &EditAccBtn,
    &RightSideBar,
    NULL
};

CSS *InvoicesCSS[] = (CSS *[]){
    &nav_bar_style,
    &nav_title,
    &nav_opt_box,
    &nav_opt,
    &nav_opt_hover,
    &LoginBtn,
    &LoginBtnHover,
    &SideBar,
    &SideBarTitle,
    &SideBarOpt,
    &SideBarOptHover,
    &UserImg,
    &UserBox,
    &UserWelTitle,
    &UserBoxTxt,
    &EditAccBtn,
    &RightSideBar,
    NULL
};

CSS *SettingCSS[] = (CSS *[]){
    &nav_bar_style,
    &nav_title,
    &nav_opt_box,
    &nav_opt,
    &nav_opt_hover,
    &LoginBtn,
    &LoginBtnHover,
    &SideBar,
    &SideBarTitle,
    &SideBarOpt,
    &SideBarOptHover,
    &UserImg,
    &UserBox,
    &UserWelTitle,
    &UserBoxTxt,
    &EditAccBtn,
    &RightSideBar,
    NULL
};


Control IndexBody = { .Tag = BODY_TAG, .CSS = (char *[]){"background-color: #000;", "color: #fff;", "margin: 0;", NULL}, .SubControlCount = 2, .SubControls = (void *[]){
    &NavBarCHT,
    &(Control){ .Tag = DIV_TAG, .Class = "centered_box", .SubControlCount = 4, .SubControls = (void *[]){
        &(Control){ .Tag = H2_TAG, .CSS = (char *[]){"margin-left: 20px", NULL}, .Text = "Home" },
        &(Control){ .Tag = DIV_TAG, .Class = "home_box", .SubControlCount = 7, .SubControls = (void *[]){
            &(Control){ .Tag = DIV_TAG, .Class = "box_title_box", .SubControlCount = 1, .SubControls = (void *[]){
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
        &(Control){ .Tag = DIV_TAG, .Class = "home_box", .SubControlCount = 13, .SubControls = (void *[]){
            &(Control){ .Tag = DIV_TAG, .Class = "box_title_box", .SubControlCount = 1, .SubControls = (void *[]){
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
        &(Control){ .Tag = DIV_TAG, .Class = "home_box", .SubControlCount = 6, .SubControls = (void *[]){
            &(Control){ .Tag = DIV_TAG, .Class = "box_title_box", .SubControlCount = 1, .SubControls = (void *[]){
                &(Control){ .Tag = H3_TAG, .CSS = (char *[]){"margin-left: 15px", NULL}, .Text = "Projects" },
                NULL
            }},
            &(Control){ .Tag = P_TAG, .Class = "box_txt h4", .Text = "Current Projects: " },
            &(Control){ .Tag = DIV_TAG, .Class = "project_display", .SubControlCount = 4, .SubControls = (void *[]){
                &(Control){ .Tag = DIV_TAG, .Class = "project_display_title", .SubControlCount = 2, .SubControls = (void *[]){
                    &(Control){ .Tag = IMG_TAG, .Class = "project_display_icon", .Data = "src=\"https://avatars.githubusercontent.com/u/192834162?s=200&v=4\"" },
                    &(Control){ .Tag = P_TAG, .Class = "box_txt h4", .CSS = (char *[]){"display: inline-block", NULL}, .Text = "Websign Framework" },
                    NULL
                }},
                &(Control){ .Tag = P_TAG, .Class = "box_txt h4", .Text = "What is Websign?" },
                &(Control){ .Tag = P_TAG, .Class = "box_txt", .Text = "Websign is a web-server and browser SDK built-in the server to generate and parse HTML, CSS and WebJS" },
                &(Control){ .Tag = A_TAG, .CSS = (char *[]){"text-decoration: none", "color: #fff", NULL}, .href = "https://github.com/clibplus/Net", .SubControlCount = 1, .SubControls = (void *[]){
                    &(Control){ .Tag = P_TAG, .Class = "box_txt", .CSS = (char *[]){"color: #fff", NULL}, .Text = "[GITHUB] Source Code" },
                    NULL
                }},
                NULL
            }},
            &(Control){ .Tag = DIV_TAG, .Class = "project_display", .SubControlCount = 4, .SubControls = (void *[]){
                &(Control){ .Tag = DIV_TAG, .Class = "project_display_title", .SubControlCount = 2, .SubControls = (void *[]){
                    &(Control){ .Tag = IMG_TAG, .Class = "project_display_icon", .Data = "src=\"https://icons.iconarchive.com/icons/papirus-team/papirus-mimetypes/128/text-x-script-icon.png\"" },
                    &(Control){ .Tag = P_TAG, .Class = "box_txt h4", .CSS = (char *[]){"display: inline-block", NULL}, .Text = "cLib+" },
                    NULL
                }},
                &(Control){ .Tag = P_TAG, .Class = "box_txt h4", .Text = "What is cLib+?" },
                &(Control){ .Tag = P_TAG, .Class = "box_txt", .Text = "cLib+ is a project specializing in creating high-level C library by abstracting low-level operations" },
                &(Control){ .Tag = A_TAG, .CSS = (char *[]){"text-decoration: none", "color: #fff", NULL}, .href = "https://github.com/clibplus", .SubControlCount = 1, .SubControls = (void *[]){
                    &(Control){ .Tag = P_TAG, .Class = "box_txt", .CSS = (char *[]){"color: #fff", NULL},  .Text = "[GITHUB] Organization" },
                }},
                NULL
            }},
            &(Control){ .Tag = DIV_TAG, .Class = "box_txt h4", .CSS = (char *[]){"margin-top: 15px", NULL}, .Text = "Full list on the projects tab!" },
            &(Control){ .Tag = A_TAG, .CSS = (char *[]){"margin-left: 15px;", "margin-top: 15px;", "text-decoration: none;", "color: #fff;", NULL}, .href = "/projects", .SubControlCount = 1, .SubControls = (void *[]){
                &(Control){ .Tag = DIV_TAG, .Class = "take_me_there_btn", .Text = "Take me there!" },
                NULL
            }},
            NULL
        }},
        NULL
    }},
    NULL
}};

Control ProjectList = { .Tag = BODY_TAG, .CSS = (char *[]){"background-color: #000;", "color: #fff;", "margin: 0;", NULL}, .SubControlCount = 2, .SubControls = (void *[]){
    &NavBarCHT,
    &(Control){ .Tag = DIV_TAG, .Class = "centered_box", .SubControlCount = 6, .SubControls = (void *[]){
        &(Control){ .Tag = H2_TAG, .CSS = (char *[]){"margin-left: 20px", NULL}, .Text = "Projects" },
        &(Control){ .Tag = DIV_TAG, .Class = "project_display", .SubControlCount = 4, .SubControls = (void *[]){
            &(Control){ .Tag = DIV_TAG, .Class = "project_display_title", .SubControlCount = 2, .SubControls = (void *[]){
                &(Control){ .Tag = IMG_TAG, .Class = "project_display_icon", .Data = "src=\"https://avatars.githubusercontent.com/u/192834162?s=200&v=4\"" },
                &(Control){ .Tag = P_TAG, .Class = "box_txt h4", .CSS = (char *[]){"display: inline-block", NULL}, .Text = "Websign Framework" },
                NULL
            }},
            &(Control){ .Tag = P_TAG, .Class = "box_txt h4", .Text = "What is Websign?" },
            &(Control){ .Tag = P_TAG, .Class = "box_txt", .Text = "Websign is a web-server and browser SDK built-in the server to generate and parse HTML, CSS and WebJS" },
            &(Control){ .Tag = A_TAG, .CSS = (char *[]){"text-decoration: none", "color: #fff", NULL}, .href = "https://github.com/clibplus/Net", .SubControlCount = 1, .SubControls = (void *[]){
                &(Control){ .Tag = P_TAG, .Class = "box_txt", .CSS = (char *[]){"color: #fff", NULL}, .Text = "[GITHUB] Source Code" },
                NULL
            }},
            NULL
        }},
        &(Control){ .Tag = DIV_TAG, .Class = "project_display", .SubControlCount = 4, .SubControls = (void *[]){
            &(Control){ .Tag = DIV_TAG, .Class = "project_display_title", .SubControlCount = 2, .SubControls = (void *[]){
                &(Control){ .Tag = IMG_TAG, .Class = "project_display_icon", .Data = "src=\"https://avatars.githubusercontent.com/u/192834162?s=200&v=4\"" },
                &(Control){ .Tag = P_TAG, .Class = "box_txt h4", .CSS = (char *[]){"display: inline-block", NULL}, .Text = "Websign.py" },
                NULL
            }},
            &(Control){ .Tag = P_TAG, .Class = "box_txt h4", .Text = "What is Websign.py?" },
            &(Control){ .Tag = P_TAG, .Class = "box_txt", .Text = "A python ported version of Websign" },
            &(Control){ .Tag = A_TAG, .CSS = (char *[]){"text-decoration: none", NULL}, .href = "#", .SubControlCount = 1, .SubControls = (void *[]){
                &(Control){ .Tag = P_TAG, .Class = "box_txt", .CSS = (char *[]){"color: #fff", NULL}, .Text = "[PRIVATE SOURCE CODE]" },
                NULL
            }},
            NULL
        }},
        &(Control){ .Tag = DIV_TAG, .Class = "project_display", .SubControlCount = 4, .SubControls = (void *[]){
            &(Control){ .Tag = DIV_TAG, .Class = "project_display_title", .SubControlCount = 2, .SubControls = (void *[]){
                &(Control){ .Tag = IMG_TAG, .Class = "project_display_icon", .Data = "src=\"https://icons.iconarchive.com/icons/papirus-team/papirus-mimetypes/128/text-x-script-icon.png\"" },
                &(Control){ .Tag = P_TAG, .Class = "box_txt h4", .CSS = (char *[]){"display: inline-block", NULL}, .Text = "cLib+" },
                NULL
            }},
            &(Control){ .Tag = P_TAG, .Class = "box_txt h4", .Text = "What is cLib+?" },
            &(Control){ .Tag = P_TAG, .Class = "box_txt", .Text = "cLib+ is a project specializing in creating high-level C library by abstracting low-level operations" },
            &(Control){ .Tag = A_TAG, .CSS = (char *[]){"text-decoration: none", NULL}, .href = "https://github.com/clibplus", .SubControlCount = 1, .SubControls = (void *[]){
                &(Control){ .Tag = P_TAG, .Class = "box_txt", .CSS = (char *[]){"color: #fff", NULL}, .Text = "[GITHUB] Organization" },
                NULL
            }},
            NULL
        }},
        &(Control){ .Tag = H2_TAG, .CSS = (char *[]){"margin-left: 20px", NULL}, .Text = "Inactive / Previous Projects" },
        &(Control){ .Tag = DIV_TAG, .Class = "project_display", .SubControlCount = 4, .SubControls = (void *[]){
            &(Control){ .Tag = DIV_TAG, .Class = "project_display_title", .SubControlCount = 2, .SubControls = (void *[]){
                &(Control){ .Tag = IMG_TAG, .Class = "project_display_icon", .Data = "src=\"https://avatars.githubusercontent.com/u/179827981?s=200&v=4\"" },
                &(Control){ .Tag = P_TAG, .Class = "box_txt h4", .CSS = (char *[]){"display: inline-block", NULL}, .Text = "ExLayer v8.0" },
                NULL
            }},
            &(Control){ .Tag = P_TAG, .Class = "box_txt h4", .Text = "What is ExLayer?" },
            &(Control){ .Tag = P_TAG, .Class = "box_txt", .Text = "Network Protection Application, Monitor's Network and System Resource Usage to pervent overloads from happening! Originally named Cyber Shield when launched." },
            &(Control){ .Tag = A_TAG, .CSS = (char *[]){"text-decoration: none", NULL}, .href = "#", .SubControlCount = 1, .SubControls = (void *[]){
                &(Control){ .Tag = P_TAG, .Class = "box_txt", .CSS = (char *[]){"color: #fff", NULL}, .Text = "[PRIVATE SOURCE CODE]" },
                NULL
            }},
            NULL
        }},
        NULL
    }},
    NULL
}};


Control ContactForm = { .Tag = BODY_TAG, .CSS = (char *[]){"background-color: #000;", "color: #fff;", "margin: 0;", NULL}, .SubControlCount = 3, .SubControls = (void *[]){
    &NavBarCHT,
    &(Control){ .Tag = DIV_TAG, .Class = "centered_box", .SubControlCount = 2, .SubControls = (void *[]){
        &(Control){ .Tag = H2_TAG, .CSS = (char *[]){"margin-left: 20px", NULL}, .Text = "Contact" },
        &(Control){ .Tag = DIV_TAG, .Class = "home_box", .SubControlCount = 6, .SubControls = (void *[]){
            &(Control){ .Tag = DIV_TAG, .Class = "box_title_box", .SubControlCount = 1, .SubControls = (void *[]){
                &(Control){ .Tag = H2_TAG, .Class = "box_txt h4", .Text = "List Of Social Media" },
                NULL
            }},
            &(Control){ .Tag = DIV_TAG, .CSS = (char *[]){"margin-top: 20px", NULL} },
            /* Github Social Link */
            &(Control){ .Tag = A_TAG, .href = "https://github.com/algo1337", .CSS = (char *[]){"text-decoration: none;", "color: #fff;", NULL}, .SubControlCount = 1, .SubControls = (void *[]){
                &(Control){ .Tag = DIV_TAG, .CSS = (char *[]){"width: 135px;", "margin-left: 15px;", "margin-top: 10px;", "display: grid;", "grid-template-columns: repeat(2, 1fr);", "gap: 2px;", NULL}, .SubControlCount = 2, .SubControls = (void *[]){
                    &(Control){ .Tag = IMG_TAG, .Class = "social_img", .Data = "src=\"https://puu.sh/KnahB/5b73494620.png\"" },
                    &(Control){ .Tag = P_TAG, .Class = "social_link", .Text = "@Algo1337" },
                    NULL
                }},
                NULL
            }},
            /* X Social Link */
            &(Control){ .Tag = A_TAG, .href = "https://x.com/algo1337", .CSS = (char *[]){"text-decoration: none;", "color: #fff;", NULL}, .SubControlCount = 1, .SubControls = (void *[]){
                &(Control){ .Tag = DIV_TAG, .CSS = (char *[]){"width: 135px;", "margin-left: 15px;", "margin-top: 10px;", "display: grid;", "grid-template-columns: repeat(2, 1fr);", "gap: 2px;", NULL}, .SubControlCount = 2, .SubControls = (void *[]){
                    &(Control){ .Tag = IMG_TAG, .Class = "social_img", .Data = "src=\"https://upload.wikimedia.org/wikipedia/commons/thumb/5/5a/X_icon_2.svg/1483px-X_icon_2.svg.png\"" },
                    &(Control){ .Tag = P_TAG, .Class = "social_link", .Text = "@Algo1337" },
                    NULL
                }},
                NULL
            }},
            /* YT Social Link */
            &(Control){ .Tag = A_TAG, .href = "https://www.youtube.com/channel/UC7l8JtADVjad36FkjFfytPg", .CSS = (char *[]){"text-decoration: none;", "color: #fff;", NULL}, .SubControlCount = 1, .SubControls = (void *[]){
                &(Control){ .Tag = DIV_TAG, .CSS = (char *[]){"width: 135px;", "margin-left: 15px;", "margin-top: 10px;", "display: grid;", "grid-template-columns: repeat(2, 1fr);", "gap: 2px;", NULL}, .SubControlCount = 2, .SubControls = (void *[]){
                    &(Control){ .Tag = IMG_TAG, .Class = "social_img", .Data = "src=\"https://cdn-icons-png.flaticon.com/512/174/174883.png\"" },
                    &(Control){ .Tag = P_TAG, .Class = "social_link", .Text = "@Algo1337" },
                    NULL
                }},
                NULL
            }},
            /* Email */
            &(Control){ .Tag = A_TAG, .href = "mailto:intensesec@gmail.com", .CSS = (char *[]){"text-decoration: none;", "color: #fff;", NULL}, .SubControlCount = 1, .SubControls = (void *[]){
                &(Control){ .Tag = DIV_TAG, .CSS = (char *[]){"width: 135px;", "margin-left: 15px;", "margin-top: 10px;", "display: grid;", "grid-template-columns: repeat(2, 1fr);", "gap: 2px;", NULL}, .SubControlCount = 2, .SubControls = (void *[]){
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
    &(Control){ .Tag = DIV_TAG, .Class = "home_box", .SubControlCount = 1, .SubControls = (void *[]){
        &(Control){ .Tag = DIV_TAG, .Class = "box_title_box", .SubControlCount = 1, .SubControls = (void *[]){
            &(Control){ .Tag = H2_TAG, .Class = "box_txt h4", .Text = "Contact Form" },
            NULL
        }},
        &(Control){ .Tag = FORM_TAG, .Data = "method=\"post\"", .SubControlCount = 9, .SubControls = (void *[]){
            &(Control){ .Tag = P_TAG, .Class = "box_txt", .Text = "Fill out this form to email me directly from here!" },
            &(Control){ .Tag = P_TAG, .Class = "box_txt", .Text = "From Email:" },
            &(Control){ .Tag = INPUT_TAG, .ID = "from_email", .Type = "text", .Class = "txtbox", .Data = "name=\"from_email\" placeholder=\"email@domain.com\"" },
            &(Control){ .Tag = P_TAG, .Class = "box_txt", .Text = "Subject:" },
            &(Control){ .Tag = INPUT_TAG, .ID = "email_subject", .Type = "text", .Class = "txtbox", .Data = "name=\"email_subject\" placeholder=\"Subject\"" },
            &(Control){ .Tag = P_TAG, .Class = "box_txt", .Text = "Message:" },
            &(Control){ .Tag = INPUT_TAG, .ID = "email_msg", .Type = "text", .Class = "txtbox", .CSS = (char *[]){"height: 50px", NULL}, .Data = "name=\"email_msg\" placeholder=\"Message\"" },
            &(Control){ .Tag = INPUT_TAG, .Type = "submit", .ID = "submit_email", .Data = "name=\"submit_email\" value=\"Send\"", .Class = "email_btn" },
            &(Control){ .Tag = P_TAG, .ID = "results", .Class = "box_txt", .Data = "name=\"results\"" },
            NULL
        }},
        NULL
    }},
    NULL
}};

Control LoginForm = { .Tag = BODY_TAG, .CSS = (char *[]){"background-color: #000;", "color: #fff;", "margin: 0;", NULL}, .SubControlCount = 3, .SubControls = (void *[]){
    &NavBarCHT,
    &(Control){ .Tag = DIV_TAG, .Class = "login_form", .SubControlCount = 3, .SubControls = (void *[]){
        &(Control){ .Tag = H1_TAG, .Class = "login_title", .Text = "Login" },
        &(Control){ .Tag = DIV_TAG, .SubControlCount = 2, .SubControls = (void *[]){
            &(Control){ .Tag = P_TAG, .CSS = (char *[]){"display: inline-block;", "margin-left: 20px;", "width 100px;", NULL}, .Text = "Username" },
            &(Control){ .Tag = INPUT_TAG, .Class = "login_txtbox", .Type = "text", .Data = "placeholder=\"Username\"" },
            NULL
        }},
        &(Control){ .Tag = DIV_TAG, .SubControlCount = 2, .SubControls = (void *[]){
            &(Control){ .Tag = P_TAG, .CSS = (char *[]){"display: inline-block;", "margin-left: 20px;", "width 100px;", NULL}, .Text = "Password" },
            &(Control){ .Tag = INPUT_TAG, .Class = "login_txtbox", .Type = "text", .Data = "placeholder=\"Password\"" },
            NULL
        }},
        &(Control){ .Tag = BUTTON_TAG, .Class = "signin_btn", .Text = "Sign In" },
        NULL
    }},
    NULL
}};

Control Store = { .Tag = BODY_TAG, .CSS = (char *[]){"background-color: #000;", "color: #fff;", "margin: 0;", NULL}, .SubControlCount = 2, .SubControls = (void *[]){
    &NavBarCHT,
    &(Control){ .Tag = DIV_TAG, .Class = "centered_box", .CSS = (char *[]){"background-color: #ff0000", NULL}, .SubControlCount = 2, .SubControls = (void *[]){
        &(Control){ .Tag = H2_TAG, .CSS = (char *[]){"margin-left: 20px;", "margin-top: 25px;", NULL}, .Text = "This page is under development!" },
        NULL
    }},
    &(Control){ .Tag = DIV_TAG, .Class = "centered_box", .SubControlCount = 2, .SubControls = (void *[]){
        &(Control){ .Tag = H2_TAG, .CSS = (char *[]){"margin-left: 20px", NULL}, .Text = "Services" },
        &(Control){ .Tag = DIV_TAG, .Class = "home_box", .SubControlCount = 7, .SubControls = (void *[]){
            &(Control){ .Tag = DIV_TAG, .Class = "box_title_box", .SubControlCount = 1, .SubControls = (void *[]){
                &(Control){ .Tag = H3_TAG, .CSS = (char *[]){"margin-left: 15px", NULL}, .Text = "Coding Development" },
                NULL
            }},
            &(Control){ .Tag = P_TAG, .Class = "box_txt", .Text = "Working on starting up a business or need a hand on your business platform?" },
            &(Control){ .Tag = P_TAG, .Class = "box_txt", .Text = "Offering programs for business to manage products with a digital inventory that will keep track of all in stock and e-Commerce implementation!" },
            NULL
        }},
        &(Control){ .Tag = DIV_TAG, .Class = "home_box", .SubControlCount = 7, .SubControls = (void *[]){
            &(Control){ .Tag = DIV_TAG, .Class = "box_title_box", .SubControlCount = 1, .SubControls = (void *[]){
                &(Control){ .Tag = H3_TAG, .CSS = (char *[]){"margin-left: 15px", NULL}, .Text = "Garden Builds" },
                NULL
            }},
            &(Control){ .Tag = P_TAG, .Class = "box_txt", .Text = "Want to upgrade your garden?" },
            &(Control){ .Tag = P_TAG, .Class = "box_txt", .Text = "Offering all sorts of planting beds from ground to house builds!" },
            &(Control){ .Tag = P_TAG, .Class = "box_txt", .CSS = (char *[]){"color: #ff0000", NULL}, .Text = "[P.S]: This is only for local Tennessee residents." },
            NULL
        }},
        NULL
    }},
    NULL
}};

Control UserDashboard = { .Tag = BODY_TAG, .CSS = (char *[]){"background-color: #000;", "color: #fff;", "margin: 0;", NULL}, .SubControlCount = 3, .SubControls = (void *[]){
    &NavBarCHT,
    &(Control){ .Tag = DIV_TAG, .Class = "side_bar", .SubControlCount = 5, .SubControls = (void *[]){
        &(Control){ .Tag = P_TAG, .Class = "side_bar_title", .Text = "Account" },
        &(Control){ .Tag = DIV_TAG, .Class = "side_bar_opt", .Text = "Orders" },
        &(Control){ .Tag = DIV_TAG, .Class = "side_bar_opt", .Text = "Invoices" },
        &(Control){ .Tag = DIV_TAG, .Class = "side_bar_opt", .Text = "Settings" },
        NULL
    }},
    NULL
}};

Control Orders = { .Tag = BODY_TAG, .CSS = (char *[]){"background-color: #000;", "color: #fff;", "margin: 0;", NULL}, .SubControlCount = 3, .SubControls = (void *[]){
    &NavBarCHT,
    &(Control){ .Tag = DIV_TAG, .Class = "side_bar", .SubControlCount = 5, .SubControls = (void *[]){
        &(Control){ .Tag = P_TAG, .Class = "side_bar_title", .Text = "Account" },
        &(Control){ .Tag = DIV_TAG, .Class = "side_bar_opt", .Text = "Orders" },
        &(Control){ .Tag = DIV_TAG, .Class = "side_bar_opt", .Text = "Invoices" },
        &(Control){ .Tag = DIV_TAG, .Class = "side_bar_opt", .Text = "Settings" },
        NULL
    }},
    NULL
}};

Control Invoices = { .Tag = BODY_TAG, .CSS = (char *[]){"background-color: #000;", "color: #fff;", "margin: 0;", NULL}, .SubControlCount = 3, .SubControls = (void *[]){
    &NavBarCHT,
    &(Control){ .Tag = DIV_TAG, .Class = "side_bar", .SubControlCount = 5, .SubControls = (void *[]){
        &(Control){ .Tag = P_TAG, .Class = "side_bar_title", .Text = "Account" },
        &(Control){ .Tag = DIV_TAG, .Class = "side_bar_opt", .Text = "Orders" },
        &(Control){ .Tag = DIV_TAG, .Class = "side_bar_opt", .Text = "Invoices" },
        &(Control){ .Tag = DIV_TAG, .Class = "side_bar_opt", .Text = "Settings" },
        NULL
    }},
    NULL
}};

Control Setting = { .Tag = BODY_TAG, .CSS = (char *[]){"background-color: #000;", "color: #fff;", "margin: 0;", NULL}, .SubControlCount = 3, .SubControls = (void *[]){
    &NavBarCHT,
    &(Control){ .Tag = DIV_TAG, .Class = "side_bar", .SubControlCount = 5, .SubControls = (void *[]){
        &(Control){ .Tag = P_TAG, .Class = "side_bar_title", .Text = "Account" },
        &(Control){ .Tag = DIV_TAG, .Class = "side_bar_opt", .Text = "Orders" },
        &(Control){ .Tag = DIV_TAG, .Class = "side_bar_opt", .Text = "Invoices" },
        &(Control){ .Tag = DIV_TAG, .Class = "side_bar_opt", .Text = "Settings" },
        NULL
    }},
    NULL
}};