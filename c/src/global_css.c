#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "../algo.h"

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

CSS LoginBtn = (CSS){ .Class = "login_btn", .Selector = 1, .Data = (char *[]){
    "display: inline-block",
    "position: absolute",
    "margin: auto",
    "top: 25px",
    "right: 2%",
    "width: 65px",
    "color: #fff",
    "border-radius: 15px",
    "align-items: center",
    "text-align: center",
    "padding: 8px",
    "transition: 1s",
    NULL
}};

CSS LoginBtnHover = (CSS){ .Class = "login_btn:hover", .Selector = 1, .Data = (char *[]){
    "background-color: #50514e",
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
    "transition: 0.3s",
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

CSS cLoginForm = (CSS){ .Class = "login_form", .Selector = 1, .Data = (char *[]){
    "margin: auto",
    "margin-top: 8%",
    "top: 50%",
    "left: 50%",
    "width: 500px",
    "height: 250px",
    "border-radius: 15px",
    "background-color: #fff",
    "color: #000",
    NULL
}};

CSS LoginTitle = (CSS){ .Class = "login_title", .Selector = 1, .Data = (char *[]){
    "margin-left: 15px",
    "padding-top: 10px",
    "font-size: 30",
    "font-weight: bold",
    NULL
}};

CSS LoginTxtbox = (CSS){ .Class = "login_txtbox", .Selector = 1, .Data = (char *[]){
    "width: 350px",
    "border-style: solid",
    "margin-left: 25px",
    "padding: 5px",
    "font-size: 15",
    "border-radius: 15px",
    "display: inline-block",
    NULL
}};

CSS SigninBtn = (CSS){ .Class = "signin_btn", .Selector = 1, .Data = (char *[]){
    "margin-top: 15px",
    "margin-left: 15px",
    "width: 465px",
    "padding: 5px",
    "border-radius: 15px",
    "background-color: #24303a",
    "font-size: 17",
    "color: #fff",
    NULL
}};

CSS SideBar = (CSS){ .Class = "side_bar", .Selector = 1, .Data = (char *[]){
    "background-color: #24303a",
    "position: absolute",
    "margin: auto",
    "left: 0%",
    "width: 200px",
    "height: 100vh",
    NULL
}};

CSS RightSideBar = (CSS){ .Class = "user_side_bar", .Selector = 1, .Data = (char *[]){
    "background-color: #24303a",
    "position: absolute",
    "margin: auto",
    "right: 0%",
    "width: 200px",
    "height: 100vh",
    NULL
}};

CSS SideBarTitle = (CSS){ .Class = "side_bar_title", .Selector = 1, .Data = (char *[]){
    "margin-left: 30px",
    "font-size: 30",
    "font-weight: bold",
    "color: #fff",
    NULL
}};

CSS SideBarOpt = (CSS){ .Class = "side_bar_opt", .Selector = 1, .Data = (char *[]){
    "background-color: #24303a",
    "color: #fff",
    "width: 180px",
    "text-align: center",
    "padding: 10px",
    "transition: 0.3s",
    NULL
}};

CSS SideBarOptHover = (CSS){ .Class = "side_bar_opt:hover", .Selector = 1, .Data = (char *[]){
    "background:rgb(46, 62, 75)",
    NULL
}};

CSS UserBox = (CSS){ .Class = "user_box", .Selector = 1, .Data = (char *[]){
    "background-color:rgb(82, 97, 107)",
    "poistion: absolute",
    "margin: auto",
    "bottom: 0",
    "left: 0",
    "width: 200px",
    "padding-bottom: 8px",
    NULL
}};

CSS UserWelTitle = (CSS){ .Class = "welcome_bk_label", .Selector = 1, .Data = (char *[]){
    "font-size: 22px",
    NULL
}};

CSS UserImg = (CSS){ .Class = "user_img", .Selector = 1, .Data = (char *[]){
    "margin-top: 15px",
    "margin-left: 8px",
    "width: 180px",
    "height: 180px",
    NULL
}};

CSS UserBoxTxt = (CSS){ .Class = "user_box_txt", .Selector = 1, .Data = (char *[]){
    "margin-left: 10px",
    "font-size: 16",
    NULL
}};

CSS EditAccBtn = (CSS){ .Class = "edit_acc_btn", .Selector = 1, .Data = (char *[]){
    "background-color:rgb(82, 97, 107)",
    "margin-left: 8px",
    "width: 170px",
    "text-align: center",
    "padding: 5px",
    "border-radius: 15px",
    "margin-bottom: 8px",
    NULL
}};

CSS ServiceDisplay = (CSS){ .Class = "service_display", .Selector = 1, .Data = (char *[]){
    "margin: auto",
    "width: 300px",
    "height: 450px",
    "background-color: #000",
    "border: 2px solid white",
    "border-radius: 20px",
    "color: #fff",
    "display: inline-block",
    NULL
}};