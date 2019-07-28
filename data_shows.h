/*
 * 这是数据显示界面 设置刷新频率
 * */
#ifndef DATA_SHOWS_H
#define DATA_SHOWS_H
#include <QObject>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
class data_shows :public QObject
{
    Q_OBJECT
private:
    QWidget * window;
    QWidget * top_window;
    QWidget * button_window;
    QHBoxLayout * top_layout;
    QHBoxLayout * button_layout;
    QVBoxLayout * layout;
    QLabel * information;
    QLineEdit * data;
    QPushButton * confirm;
    QPushButton * cancle;
public:
    data_shows();
    ~data_shows();
public slots:
    void confirm_response();
    void cancle_response();
};
#endif // DATA_SHOWS_H
