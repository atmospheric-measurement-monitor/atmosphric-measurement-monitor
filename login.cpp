#include "login.h"
#include "mainwindow.h"
login::login()
{
    window = new QWidget;//主窗口
    username_widget = new QWidget;
    password_widget = new QWidget;
    button_widget = new QWidget;                                //下方按钮布局
    window_layout = new QVBoxLayout;
    username_layout = new QHBoxLayout;
    password_layout = new QHBoxLayout;
    Button_layout = new QHBoxLayout;
    username = new QLineEdit("Admin");
    password = new QLineEdit("Admin");
    username_label = new QLabel("用户名");
    password_label = new QLabel(" 密码  ");
    password->setEchoMode(QLineEdit::Password);                 //设置密码不可见
    login_button = new QPushButton("登录");
    exit_botton = new QPushButton("退出");
    QObject::connect(login_button,SIGNAL(clicked(bool)),this,SLOT(turn_to_mainwindow()));
    QObject::connect(exit_botton,SIGNAL(clicked(bool)),this,SLOT(exit()));
    username_layout->addWidget(username_label);
    username_layout->addWidget(username);
    username_widget->setLayout(username_layout);
    password_layout->addWidget(password_label);
    password_layout->addWidget(password);
    password_widget->setLayout(password_layout);
    Button_layout -> addWidget(login_button);
    Button_layout->addWidget(exit_botton);
    Button_layout->setSpacing(-5);
    button_widget->setLayout(Button_layout);
    window_layout->addWidget(username_widget);
    window_layout->addWidget(password_widget);
    window_layout->addWidget(button_widget);
    window ->setLayout(window_layout);
    window->setFixedSize(300,200);
    window->setWindowTitle("登录程序");
    window->show();
}
login::~login()
{
    ;
}
bool login::if_correct()
{
    if(this->username->text() == "Admin" && this->password->text() == "Admin")
        return true;
    return false;
}
void login::turn_to_mainwindow()
{
    if(if_correct())
    {
        mainwindow m;
        window->close();
    }
}
void login::exit()
{
    window->close();
}
