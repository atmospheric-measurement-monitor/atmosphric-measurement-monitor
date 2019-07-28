#include "login.h"
#include "mainwindow.h"
login::login()
{
    window = new QWidget;                                       //主窗口
    button_widget = new QWidget;                                //下方按钮布局
    window_layout = new QVBoxLayout;
    Button_layout = new QHBoxLayout;
    username = new QLineEdit("Admin");
    password = new QLineEdit("Admin");
    password->setEchoMode(QLineEdit::Password);                 //设置密码不可见
    login_button = new QPushButton("登录");
    exit_botton = new QPushButton("退出");
    QObject::connect(login_button,SIGNAL(clicked(bool)),this,SLOT(turn_to_mainwindow()));
    QObject::connect(exit_botton,SIGNAL(clicked(bool)),this,SLOT(exit()));
    Button_layout -> addWidget(login_button);
    Button_layout->addWidget(exit_botton);
    button_widget->setLayout(Button_layout);
    window_layout->addWidget(username);
    window_layout->addWidget(password);
    window_layout->addWidget(button_widget);
    window ->setLayout(window_layout);
    window->setFixedSize(200,130);
    window->setWindowTitle("登录");
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