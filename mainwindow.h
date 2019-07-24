#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QSplitter>
#include <QPushButton>
#include <QTextEdit>
#include <QPalette>
#include <QColor>
#include <QWidget>
#include <QHBoxLayout>
#include <QRect>
class mainwindow
{
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
    QHBoxLayout * main_bottom_layout;
    QHBoxLayout * main_operations_layout;
    QHBoxLayout * main_operations_details_layout;
    QHBoxLayout * main_main_layout;
    QPushButton * System;
    QPushButton * Calibration_and_Observation;
    QPushButton * Parameter_Setting;
    QPushButton * Help;
    QPushButton * Exit;
    QTextEdit * main_main_mi;
    QTextEdit * main_main_ri;
    QTextEdit  * top;
    QTextEdit * edit;
public:
    mainwindow();
    ~mainwindow();
};
#endif // MAINWINDOW_H
