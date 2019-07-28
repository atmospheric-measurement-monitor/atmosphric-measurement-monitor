/*
 * 通信参数设定界面
 * */
#ifndef CONMUNICATION_H
#define CONMUNICATION_H
#include <QObject>
#include <QComboBox>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QStringList>
class communication :public QObject
{
    Q_OBJECT
private:
    QWidget * window;
    QWidget * type_widget;
    QWidget * sifu_widget;
    QWidget * reciver_widget;
    QWidget * speed_widget;
    QWidget * button_widget;
    QVBoxLayout * layout;
    QHBoxLayout * type_layout;
    QHBoxLayout * sifu_layout;
    QHBoxLayout * reciver_layout;
    QHBoxLayout * speed_layout;
    QHBoxLayout * button_layout;

    QComboBox * type;
    QLabel * sifu_CAN;
    QLabel * sifu_conmunication_speed;
    QComboBox * sifu_CAN_combobox;
    QComboBox * sifu_conmunication_speed_conbobox;
    QLabel * reciver_CAN;
    QLabel * reciver_conmunication_speed;
    QComboBox * reciver_CAN_combobox;
    QComboBox * reciver_conmunication_speed_combobox;
    QLabel * location_speed;
    QLabel * angle_speed;
    QLineEdit * location_speed_data;
    QLineEdit * angle_speed_data;
    QPushButton * confirm;
    QPushButton * cancle;
 public:
    communication();
    ~communication();
 public slots:
    void confirm_response();
    void cancle_response();
};
#endif // CONMUNICATION_H
