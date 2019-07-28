/*
 * 这个文件是显示设备的一些基本的属性
 * */
#ifndef DEVICE_H
#define DEVICE_H
#include <QObject>
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>
#include <QHBoxLayout>
#include <QVBoxLayout>
class device : public QObject
{
    Q_OBJECT
private:
    QWidget * window;
    QWidget * type_widget;
    QWidget * number_widget;
    QWidget * description_widget;
    QWidget * ip_widget;
    QWidget * button_widget;
    QVBoxLayout * layout;
    QHBoxLayout * type_layout;
    QHBoxLayout * number_layout;
    QHBoxLayout * description_layout;
    QHBoxLayout * ip_layout;
    QHBoxLayout * button_layout;
    QLabel * type;
    QLabel * number;
    QLabel * description;
    QLabel * ip;
    QLineEdit * type_data;
    QLineEdit * number_data;
    QLineEdit * description_data;
    QLineEdit * ip_data;
    QPushButton * confirm;
    QPushButton * cancle;
public:
    device();
    ~device();
public slots:
    void confirm_response();
    void cancle_response();
};
#endif // DEVICE_H
