/*
 * 自定标 数据文件计算界面
 * */
#ifndef CACULATE_SELF_LOCATION_H
#define CACULATE_SELF_LOCATION_H
#include <QObject>
#include <QWidget>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QlineEdit>
#include <QPushButton>
class caculate_self_location : public QObject
{
    Q_OBJECT
private:
    QWidget * window;
    QWidget * top_window;
    QWidget * middle_window;
    QWidget * button_window;
    QHBoxLayout * top_layout;
    QHBoxLayout * middle_layout;
    QHBoxLayout * button_layout;
    QVBoxLayout * layout;
    QLabel * information;
    QLineEdit * path;
    QPushButton * brower;
    QPushButton * confirm;
    QPushButton * cancle;
public:
    caculate_self_location();
    ~caculate_self_location();
public slots:
    void brower_response();
    void confirm_response();
    void cancle_response();
};
#endif // CACULATE_SELF_LOCATION_H
