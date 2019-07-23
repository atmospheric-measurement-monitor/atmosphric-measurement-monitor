#include "mainwindow.h"
mainwindow::mainwindow()
{
    main_window = new QSplitter(Qt::Vertical,0);
    main_top = new QSplitter(Qt::Vertical,main_window);
    main_middle = new QSplitter(Qt::Vertical,main_top);
    main_bottom = new QSplitter(Qt::Horizontal,main_middle);
    main_window_botton_1 = new QPushButton("参数设置",main_bottom);
    main_window_botton_2 = new QPushButton("定标",main_bottom);
    main_window_botton_3 = new QPushButton("系统",main_bottom);
    main_top_exit = new QTextEdit("top",main_top);
    main_middle_edit = new QTextEdit("middle",main_middle);
    main_bottom_edit = new QTextEdit("window",main_window);
    QPalette pal(main_window->palette());
    pal.setColor(QPalette::Background,QColor(160,32,240,255));
    main_window->setStretchFactor(0,17);
    main_window->setStretchFactor(1,2);
    main_top->setStretchFactor(0,1);
    main_top->setStretchFactor(1,8);
    main_middle->setStretchFactor(0,8);
    main_middle->setStretchFactor(1,3);
    main_window->setWindowTitle("client");
    main_window->setAutoFillBackground(true);
    main_window->setPalette(pal);
    main_window->showMaximized();
    main_window->show();
}
mainwindow::~mainwindow()
{

}
