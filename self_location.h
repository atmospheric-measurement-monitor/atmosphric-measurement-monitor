/*
 * 这是 自定标子窗口
 * */
#ifndef SELF_LOCATION_H
#define SELF_LOCATION_H
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QWidget>
#include <QObject>
class self_location :public QObject
{
    Q_OBJECT
private:
    QWidget * window;
    QWidget * top_window;
    QWidget * bottom_window;
    QLabel * information;
    QLineEdit * angle;
    QPushButton * confirm;
    QPushButton * cancle;
    QHBoxLayout * top_layout;
    QHBoxLayout * bottom_layout;
    QVBoxLayout * layout;
public:
    self_location();
    ~self_location();
public slots:
    void confirm_response();
    void cancle_response();
};
#endif // SELF_LOCATION_H
