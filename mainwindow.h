#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "draw_frame.h"
#include "exit.h"
#include "self_location.h"
#include "caculate_self_location.h"
#include "engineering_guidance.h"
#include "data_shows.h"
#include "save.h"
#include "device.h"
#include "communication.h"
#include "polar.h"
#include "mybutton.h"
#include "myspeed.h"
#include "cthermometer_widget.h"
#include <QSplitter>
#include <QTextEdit>
#include <QPalette>
#include <QColor>
#include <QWidget>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QRect>
#include <QImage>
#include <QPen>
#include <QPainter>
#include <QLabel>
#include <QFont>
#include <QIcon>
#include <QProcess>
#include <QStringList>
#include <QObject>
#include <iostream>
class mainwindow : public QWidget
{
    Q_OBJECT
private:
    QSplitter * main_bottom;
    QSplitter * main_main;
    QSplitter * main_operations;
    QSplitter * main_operations_details;
    QSplitter * main_main_middle;
    QSplitter * main_main_right;

    QWidget * main_bottom_widget;
    QWidget * main_operations_Widget;
    QWidget * main_operations_details_widget;
    QWidget * main_main_widget;
    QWidget * main_main_middle_widget;
    QHBoxLayout * main_bottom_layout;
    QHBoxLayout * main_operations_layout;
    QHBoxLayout * main_operations_details_layout;
    QVBoxLayout * main_main_layout;
    QVBoxLayout * main_main_middle_layout;
    QPushButton * System;
    QIcon * System_icon;
    QPushButton * Calibration_and_Observation;
    QIcon * Calibration_and_Observation_icon;
    QPushButton * Parameter_Setting;
    QIcon * Parameter_Setting_icon;
    QPushButton * Help;
    QIcon * Help_icon;
    QPushButton * Exit;
    QIcon * Exit_icon;
    QLabel * main_main_mi;
    QLabel * main_main_ri;
    QLabel  * top;
    QLabel * edit;
    QFont * font;   //字体
    zhexian * draw;    //中间图形

    MyButton * major_enviroment_paramters;               //环境参数
    MyButton * satellite_positions;                      //卫星位置图
    MyButton * ground_temperature;                       //地面温度
    MyButton * ground_humidity;                          //地面湿度
    MyButton * ground_pressure;                          //地面压强
    MyButton * enviroment_paramters_show_all;            //全部显示

    MyButton * major_error_correction;                   //误差修正
    MyButton * distance_error;                           //典型仰角距离误差
    MyButton * angle_error;                              //典型仰角距离误差
    MyButton * error_show_all;                           //全部显示

    MyButton * major_enviroment_data;                    //环境数据剖面
    MyButton * refraction;                               //折射率剖面
    MyButton * electro_density;                          //电子密度剖面
    MyButton * enviroment_data_show_all;                 //全部显示

    MyButton * fault_and_status;                         //故障与状态监控
public:
    mainwindow(QWidget * parent = 0);
    ~mainwindow();
    void init_left_menus();
    void init_top_menus();
public slots:
    void Help_response();                        //帮助按钮的响应函数
    void Exit_response();                       //退出按钮的响应函数
};
#endif // MAINWINDOW_H
