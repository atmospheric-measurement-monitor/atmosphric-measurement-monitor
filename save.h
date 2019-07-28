/*
 * 数据保存位置设定
 * */
#ifndef SAVEH_H
#define SAVEH_H
#include <QObject>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLineEdit>
class save :public QObject
{
    Q_OBJECT
private:
    QWidget * window;
    QWidget * top_window;
    QWidget * button_window;
    QHBoxLayout * top_layout;
    QHBoxLayout * button_layout;
    QVBoxLayout * layout;
    QPushButton * brower;
    QLineEdit * path;
    QPushButton * confirm;
    QPushButton * cancle;
public:
    save();
    ~save();
public slots:
    void confirm_response();
    void cancle_response();
};

#endif // SAVEH_H
