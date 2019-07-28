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
class login : public QObject
{
    Q_OBJECT
private:
    QWidget * window;
    QWidget * button_widget;
    QVBoxLayout * window_layout;
    QHBoxLayout * Button_layout;
    QLineEdit * username;
    QLineEdit * password;
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
