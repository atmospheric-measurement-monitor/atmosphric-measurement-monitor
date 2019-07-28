/*
 * 这是点击  退出程序按钮之后 的确认界面
*/

#ifndef EIXT_H
#define EIXT_H
#include <QObject>
#include <QWidget>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLabel>
#include<QApplication>
class exit_confirm : public QObject
{
    Q_OBJECT
private:
    QWidget * window;
    QWidget * top_widget;  //提示布局
    QWidget * bottom_widget;
    QVBoxLayout * window_layout;
    QHBoxLayout * top_layout;
    QHBoxLayout * bottom_layout;
    QLabel * informations;      //提示
    QPushButton * confirm;
    QPushButton * cancle;
public:
    exit_confirm();
    ~exit_confirm();
public slots:
    void confirm_response();
    void cancle_response();
};
#endif // EIXT_H
