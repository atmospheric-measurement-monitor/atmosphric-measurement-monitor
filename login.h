/*
 这是登录界面的头文件
 */


#ifndef LOGIN_H
#define LOGIN_H
#include <QLineEdit>
#include <QPushButton>
#include <QWidget>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QObject>
#include <QLabel>
class login : public QObject
{
    Q_OBJECT
private:
    QWidget * window;
    QWidget * button_widget;
    QWidget * username_widget;
    QWidget * password_widget;
    QVBoxLayout * window_layout;
    QHBoxLayout * username_layout;
    QHBoxLayout * password_layout;
    QHBoxLayout * Button_layout;
    QLineEdit * username;
    QLineEdit * password;
    QLabel * username_label;
    QLabel * password_label;
    QPushButton * login_button;
    QPushButton * exit_botton;
public:
    login();
    ~login();
    bool if_correct();      //账号密码是否正确
public slots:               //按钮响应函数
    void turn_to_mainwindow();  // 转换到主界面的函数
    void exit();                //退出登录
};
#endif // LOGIN_H
