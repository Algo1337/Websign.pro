#pragma once

#include <str.h>
#include <arr.h>
#include <map.h>

#include <Net/socket.h>
#include <Net/web.h>

extern String CONTACT_RESULTS;

typedef struct MyApp {
    String      IP;
    int         Port;
    cWS         *Server;
    Map         Headers;
} MyApp;

MyApp *StartApp(String ip, int port);
void SetupHeaders();
void ContactFormHandler(cWS *server, cWR *req, WebRoute *route, int socket);
void RouteHandler(cWS *server, cWR *req, WebRoute *route, int socket);
void DestroyApp(MyApp *app);

extern String ContactBuffer;

// == [ global_css.c ] ==
extern CSS nav_bar_style;
extern CSS nav_title;
extern CSS nav_opt_box;
extern CSS LoginBtn;
extern CSS LoginBtnHover;
extern CSS nav_opt;
extern CSS nav_opt_hover;
extern CSS centered_box;
extern CSS box;
extern CSS box_title_box;
extern CSS box_txt;
extern CSS programming_list_box;
extern CSS H4_STYLE;
extern CSS project_display;
extern CSS project_display_hover;
extern CSS project_display_icon;
extern CSS project_display_title;
extern CSS redirect_btn;
extern CSS social_img;
extern CSS txtbox;
extern CSS email_btn;
extern CSS cLoginForm;
extern CSS LoginTitle;
extern CSS LoginTxtbox;
extern CSS SigninBtn;
extern CSS SideBar;
extern CSS SideBarTitle;
extern CSS SideBarOpt;
extern CSS SideBarOptHover;
extern CSS UserImg;
extern CSS UserBox;
extern CSS UserWelTitle;
extern CSS UserBoxTxt;
extern CSS EditAccBtn;
extern CSS RightSideBar;
extern CSS ServiceDisplay;
extern CSS DashLogBox;
extern CSS LogDisplay;
extern CSS LogItem;
extern CSS StatisticDisplay;

// == [ global_cht.c ] ==
extern Control HeadControl;
extern Control NavBarCHT;
extern Control BodyControl;

// == [ global.c ] ==
extern Control IndexBody;
extern CSS *IndexCSS[];

extern Control ProjectList;
extern CSS *ProjectCSS[];

extern CSS *ContactCSS[];
extern Control ContactForm;

extern CSS *LoginCSS[];
extern Control LoginForm;

extern CSS *UserDashboardCSS[];
extern Control UserDashboard;

extern CSS *StoreCSS[];
extern Control Store;

extern CSS *OrdersCSS[];
extern Control Orders;

extern CSS *InvoicesCSS[] ;
extern Control Invoices;

extern CSS *SettingCSS[];
extern Control Setting;
