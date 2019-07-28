#include "mainwindow.h"
#define inf 0x3f3f3f3f
mainwindow::mainwindow(QWidget * parent) : QWidget(parent)
{
    font= new QFont();
    main_bottom = new QSplitter(Qt::Vertical,0);                            //最低端信息显示
    main_operations_details = new QSplitter(Qt::Horizontal,main_bottom);    //次顶端菜单
    main_operations = new QSplitter(Qt::Horizontal,main_bottom);            //顶端菜单
    main_main = new QSplitter(Qt::Horizontal,main_bottom);                  //右侧图标
    main_main_middle = new QSplitter(Qt::Horizontal,main_main);             //左侧菜单
    main_main_right = new QSplitter(Qt::Horizontal,main_main);              //中部主显示区

    init_top_menus();

    //设定底端显示
    main_bottom_widget = new QWidget();
    main_bottom_layout = new QHBoxLayout();
    edit = new  QLabel("无法连接CAN设备");
    font->setPointSize(20);
    edit->setFont(*font);
    main_bottom_layout->addWidget(edit);
    main_bottom_layout->setAlignment(Qt::AlignCenter);
    main_bottom_widget->setLayout(main_bottom_layout);
    main_bottom->addWidget(main_bottom_widget);


    //设定中部显示
    QWidget * main_main_right_widget = new QWidget;
    QHBoxLayout * main_main_right_layout = new QHBoxLayout;
    draw = new zhexian();   //中部显示图形
    zhexian * draw2 = new zhexian();
    ChartView *view = new ChartView();
    ChartView *view2 = new ChartView();
    QWidget * leftWidget = new QWidget;
    QVBoxLayout * left_layout = new QVBoxLayout;
    left_layout->addWidget(draw,1);
    left_layout->addWidget(view,1);
    leftWidget->setLayout(left_layout);
    QWidget * right_Widget = new QWidget;
    QVBoxLayout * right_layout = new QVBoxLayout;
    right_layout->addWidget(draw2,1);
    right_layout->addWidget(view2,1);
    right_Widget->setLayout(right_layout);

    main_main_right_layout->addWidget(leftWidget,1);
    main_main_right_layout->addWidget(right_Widget,1);
    main_main_right_layout->setSpacing(1);
    main_main_right_widget->setLayout(main_main_right_layout);
    main_main_right->addWidget(main_main_right_widget);

    init_left_menus();

    //右端显示
    main_main_widget = new QWidget;
    main_main_layout = new QVBoxLayout;
    Widget * w = new Widget();
    cthermometer_widget *c  = new cthermometer_widget();
    w->setFixedSize(300,300);
    c->setFixedSize(300,300);
    main_main_layout->addWidget(w);
    main_main_layout->addWidget(c);
    main_main_widget->setLayout(main_main_layout);
    main_main->addWidget(main_main_widget);


    QPalette pal(main_bottom->palette());
    pal.setColor(QPalette::Background,QColor(255,255,255,255));
    main_bottom->setStretchFactor(0,1);
    main_bottom->setStretchFactor(1,1);
    main_bottom->setStretchFactor(2,60);
    main_bottom->setStretchFactor(3,1);
    //禁用拉伸效果
    main_bottom->handle(1)->setDisabled(true);
    main_bottom->handle(2)->setDisabled(true);
    main_bottom->handle(3)->setDisabled(true);

    main_main->setStretchFactor(0,1);
    main_main->setStretchFactor(1,60);
    main_main->setStretchFactor(2,1);
    main_main->handle(1)->setDisabled(true);
    main_main->handle(2)->setDisabled(true);

    main_main->setContentsMargins(1,1,1,1);
    main_main->setHandleWidth(2);
    main_bottom->setWindowTitle("大气参数修正服务软件");
    main_bottom->setHandleWidth(2);
    main_bottom->setStyleSheet("QSplitter::handle { background-color: black }");
    main_bottom->setAutoFillBackground(true);   //最大化
    main_bottom->setPalette(pal);               //设置背景颜色
    main_bottom->setContentsMargins(2,1,2,1); //设置边距 参数分别是  左  上 右 下
    main_bottom->showMaximized();
    main_bottom->show();
}
mainwindow::~mainwindow()
{

}
void mainwindow::init_left_menus()
{

    QFont font ( "Microsoft YaHei", 13, 75);
    QWidget * widget = new QWidget;      //左侧显示按钮
    QVBoxLayout * layout = new QVBoxLayout;
    major_enviroment_paramters = new MyButton;
    major_enviroment_paramters->setText("环境参数");
    major_enviroment_paramters->setFlat(true);
    major_enviroment_paramters->setStyleSheet("text-align: left;");
    major_enviroment_paramters->setFont(font);

    satellite_positions = new MyButton;
    satellite_positions->setText("卫星位置图");
    satellite_positions->setFlat(true);

    ground_temperature = new MyButton;
    ground_temperature->setText("地面温度");
    ground_temperature->setFlat(true);

    ground_humidity = new MyButton;
    ground_humidity->setText("地面湿度");
    ground_humidity->setFlat(true);

    ground_pressure = new MyButton;
    ground_pressure->setText("地面压强");
    ground_pressure->setFlat(true);

    enviroment_paramters_show_all = new MyButton;
    enviroment_paramters_show_all->setText("显示全部");
    enviroment_paramters_show_all->setFlat(true);

    major_error_correction = new MyButton;
    major_error_correction->setText("误差修正");
    major_error_correction->setStyleSheet("text-align: left;");
    major_error_correction->setFlat(true);
    major_error_correction->setFont(font);

    distance_error = new MyButton;
    distance_error->setText("典型仰角距离误差");
    distance_error->setFlat(true);

    angle_error = new MyButton;
    angle_error->setText("典型仰角角度误差");
    angle_error->setFlat(true);

    error_show_all = new MyButton;
    error_show_all->setText("显示全部");
    error_show_all->setFlat(true);

    major_enviroment_data = new MyButton;
    major_enviroment_data->setText("环境数据剖面");
    major_enviroment_data->setFont(font);
    major_enviroment_data->setStyleSheet("text-align: left;");
    major_enviroment_data->setFlat(true);

    refraction = new MyButton;
    refraction->setText("折射率剖面");
    refraction->setFlat(true);

    electro_density = new MyButton;
    electro_density->setText("电子密度剖面");
    electro_density->setFlat(true);

    enviroment_data_show_all = new MyButton;
    enviroment_data_show_all->setText("显示全部");
    enviroment_data_show_all->setFlat(true);

    fault_and_status = new MyButton;
    fault_and_status->setText("故障与状态监测");
    fault_and_status->setStyleSheet("text-align: left;");
    fault_and_status->setFlat(true);
    fault_and_status->setFont(font);

    layout->addWidget(major_enviroment_paramters);
    layout->addWidget(satellite_positions);
    layout->addWidget(ground_temperature);
    layout->addWidget(ground_humidity);
    layout->addWidget(ground_pressure);
    layout->addWidget(enviroment_paramters_show_all);
    layout->addWidget(major_error_correction);
    layout->addWidget(distance_error);
    layout->addWidget(angle_error);
    layout->addWidget(error_show_all);
    layout->addWidget(major_enviroment_data);
    layout->addWidget(refraction);
    layout->addWidget(electro_density);
    layout->addWidget(enviroment_data_show_all);
    layout->addWidget(fault_and_status);
    widget->setLayout(layout);
    main_main_middle->addWidget(widget);
}
void mainwindow::init_top_menus()
{
    QWidget * System_widget = new QWidget;
    QWidget * Calibration_and_Observation_widget = new QWidget;
    QWidget * Parameter_Setting_widget = new QWidget;
    QWidget * Help_widget = new QWidget;
    QWidget * Exit_widget = new QWidget;
    QLabel * Help_label = new QLabel("帮助");
    QLabel * Exit_label = new QLabel("退出");
    QVBoxLayout * System_layout = new QVBoxLayout;
    QVBoxLayout * Calibration_and_Observation_layout = new QVBoxLayout;
    QVBoxLayout * Parameter_Setting_layout = new QVBoxLayout;
    QVBoxLayout * Help_layout = new QVBoxLayout;
    QVBoxLayout * Exit_layout = new QVBoxLayout;

//设定顶端按钮
    main_operations_details_widget = new QWidget;
    main_operations_details_layout = new QHBoxLayout;
    System = new QPushButton("系统设定");
    System->resize(75,30);
    System->setFont(QFont("Microsoft YaHei", 16, 75));
    System->setStyleSheet("QPushButton{background: transparent;}");
    Calibration_and_Observation = new QPushButton("定标与观测");
    Calibration_and_Observation->resize(75,30);
    Calibration_and_Observation->setFont(QFont("Microsoft YaHei", 16, 75));
    Calibration_and_Observation->setStyleSheet("QPushButton{background: transparent;}");   //设置点击之后没有阴影
    Parameter_Setting = new QPushButton("参数设定");
    Parameter_Setting->resize(75,30);
    Parameter_Setting->setFont(QFont("Microsoft YaHei", 16, 75));
    Parameter_Setting->setStyleSheet("QPushButton{background: transparent;}");

//设定次顶端按钮
    main_operations_Widget = new QWidget();
    main_operations_layout = new QHBoxLayout();

    Help = new QPushButton;
    Help_icon = new QIcon(":/images/res/Help.png");
    Help->setFixedSize(20,20);
    Help->setIcon(*Help_icon);
    Help->setIconSize(QSize(20,20));

    Exit = new QPushButton;
    Exit_icon = new QIcon(":/images/res/Exit.png");
    Exit->setFixedSize(20,20);
    Exit->setIcon(*Exit_icon);
    Exit->setIconSize(QSize(20,20));


//这里是顶端和次顶端的排版
    System_layout->addWidget(System,1,Qt::AlignCenter);
    Calibration_and_Observation_layout->addWidget(Calibration_and_Observation,1,Qt::AlignCenter);
    Parameter_Setting_layout->addWidget(Parameter_Setting,1,Qt::AlignCenter);
    Help_layout->addWidget(Help,1,Qt::AlignCenter);
    Help_layout->addWidget(Help_label,1,Qt::AlignCenter);
    Exit_layout->addWidget(Exit,1,Qt::AlignCenter);
    Exit_layout->addWidget(Exit_label,1,Qt::AlignCenter);

    System_widget->setLayout(System_layout);
    Calibration_and_Observation_widget->setLayout(Calibration_and_Observation_layout);
    Parameter_Setting_widget->setLayout(Parameter_Setting_layout);
    Help_widget->setLayout(Help_layout);
    Exit_widget->setLayout(Exit_layout);

    main_operations_details_layout->addWidget(System_widget);
    main_operations_details_layout->addWidget(Calibration_and_Observation_widget);
    main_operations_details_layout->addWidget(Parameter_Setting_widget);
    main_operations_details_layout->setAlignment(Qt::AlignLeft);
    main_operations_details_layout->setSpacing(70);
    main_operations_details_widget->setLayout(main_operations_details_layout);
    main_operations_details->addWidget(main_operations_details_widget);

    main_operations_layout->addWidget(Help_widget);
    main_operations_layout->addWidget(Exit_widget);
    main_operations_layout->setAlignment(Qt::AlignLeft);
    main_operations_layout->setSpacing(30);
    main_operations_Widget->setLayout(main_operations_layout);
    main_operations->addWidget(main_operations_Widget);
}
void mainwindow::Help_response()
{
    QProcess *helpProcess = new QProcess(this);
    QStringList argument("./help.chm");
    helpProcess->start("hh.exe",argument);
}
void mainwindow::Exit_response()
{
    exit_confirm e;
}
