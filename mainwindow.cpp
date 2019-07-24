#include "mainwindow.h"
mainwindow::mainwindow()
{
    main_bottom = new QSplitter(Qt::Vertical,0);
    main_operations = new QSplitter(Qt::Horizontal,main_bottom);
    main_operations_details = new QSplitter(Qt::Horizontal,main_bottom);
    main_main = new QSplitter(Qt::Horizontal,main_bottom);
    main_main_middle = new QSplitter(Qt::Horizontal,main_main);
    main_main_right = new QSplitter(Qt::Horizontal,main_main);

    //设定顶端按钮
    main_operations_details_widget = new QWidget;
    main_operations_details_layout = new QHBoxLayout;
    System = new QPushButton("系统管理");
    Calibration_and_Observation = new QPushButton("定标与观测");
    Parameter_Setting = new QPushButton("参数设置");
    System->setFixedSize(100,30);
    Calibration_and_Observation->setFixedSize(100,30);
    Parameter_Setting->setFixedSize(100,30);
    main_operations_details_layout->addWidget(System);
    main_operations_details_layout->addWidget(Calibration_and_Observation);
    main_operations_details_layout->addWidget(Parameter_Setting);
    main_operations_details_layout->setAlignment(Qt::AlignLeft);
    main_operations_details_layout->setSpacing(30);
    main_operations_details_widget->setLayout(main_operations_details_layout);
    main_operations_details->addWidget(main_operations_details_widget);

    //设定次顶端按钮
    main_operations_Widget = new QWidget();
    main_operations_layout = new QHBoxLayout();
    Help = new QPushButton("帮助");
    Exit = new QPushButton("退出");
    Help->setFixedSize(100,30);
    Exit->setFixedSize(100,30);
    main_operations_layout->addWidget(Help);
    main_operations_layout->addWidget(Exit);
    main_operations_layout->setAlignment(Qt::AlignLeft);
    main_operations_layout->setSpacing(30);
    main_operations_Widget->setLayout(main_operations_layout);
    main_operations->addWidget(main_operations_Widget);

    //设定底端显示
    main_bottom_widget = new QWidget();
    main_bottom_layout = new QHBoxLayout();
    edit = new QTextEdit("无法连接CAN设备");
    main_bottom_layout->addWidget(edit);
    main_bottom_widget->setLayout(main_bottom_layout);
    main_bottom->addWidget(main_bottom_widget);

    //设定中部显示
    main_main_widget = new QWidget;
    main_main_layout = new QHBoxLayout;
    top = new QTextEdit("top");
    main_main_layout->addWidget(top);
    main_main_widget->setLayout(main_main_layout);
    main_main->addWidget(main_main_widget);

    main_main_mi = new QTextEdit("hello",main_main_middle);
    main_main_ri = new QTextEdit("hello",main_main_right);
    QPalette pal(main_bottom->palette());
    pal.setColor(QPalette::Background,QColor(160,32,240,255));
    main_bottom->setStretchFactor(0,1);
    main_bottom->setStretchFactor(1,2);
    main_bottom->setStretchFactor(2,8);
    main_bottom->setStretchFactor(3,1);
    main_main->setStretchFactor(0,1.5);
    main_main->setStretchFactor(1,5);
    main_main->setStretchFactor(2,1.5);
    main_bottom->setWindowTitle("client");
    main_bottom->setAutoFillBackground(true);
    main_bottom->setPalette(pal);
    main_bottom->showMaximized();
    main_bottom->show();
}
mainwindow::~mainwindow()
{

}
