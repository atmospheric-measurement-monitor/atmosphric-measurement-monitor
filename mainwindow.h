#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QSplitter>
#include <QPushButton>
#include <QTextEdit>
#include <QPalette>
#include <QColor>
class mainwindow
{
private:
    QSplitter * main_window;
    QSplitter * main_top;
    QSplitter * main_middle;
    QSplitter * main_bottom;
    QPushButton * main_window_botton_1;
    QPushButton * main_window_botton_2;
    QPushButton * main_window_botton_3;
    QTextEdit * main_top_exit;
    QTextEdit * main_middle_edit;
    QTextEdit * main_bottom_edit;
public:
    mainwindow();
    ~mainwindow();
};
#endif // MAINWINDOW_H
