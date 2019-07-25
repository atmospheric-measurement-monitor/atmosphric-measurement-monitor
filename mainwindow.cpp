#include "mainwindow.h"
#define inf 0x3f3f3f3f
mainwindow::mainwindow(QWidget *parent)
    :QWidget(parent)
{
    setMouseTracking(true);
    font= new QFont();
    main_bottom = new QSplitter(Qt::Vertical,0);
    main_operations_details = new QSplitter(Qt::Horizontal,main_bottom);
    main_operations = new QSplitter(Qt::Horizontal,main_bottom);
    main_main = new QSplitter(Qt::Horizontal,main_bottom);
    main_main_middle = new QSplitter(Qt::Horizontal,main_main);
    main_main_right = new QSplitter(Qt::Horizontal,main_main);

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
    main_main_widget = new QWidget;
    main_main_layout = new QVBoxLayout;
    draw = new zhexian();
    zhexian * drwa_2 = new zhexian();   //中部显示图形
    main_main_layout->addWidget(draw);
    main_main_layout->addWidget(drwa_2);
    main_main_widget->setLayout(main_main_layout);
    main_main_right->addWidget(main_main_widget);

    init_left_menus();
    main_main_ri = new  QLabel("hello",main_main);


    QPalette pal(main_bottom->palette());
    pal.setColor(QPalette::Background,QColor(160,32,240,255));
    main_bottom->setStretchFactor(0,1);
    main_bottom->setStretchFactor(1,1);
    main_bottom->setStretchFactor(2,30);
    main_bottom->setStretchFactor(3,1);
    main_main->setStretchFactor(0,1);
    main_main->setStretchFactor(1,60);
    main_main->setStretchFactor(2,1);
    main_main->setContentsMargins(1,1,1,1);
    main_bottom->setWindowTitle("client");
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
    fault_and_status->setFlat(true);

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
    QLabel * System_label = new QLabel("  系统");
    QLabel * Calibration_and_Observation_label = new QLabel("定标与观测");
    QLabel * Parameter_Setting_label = new QLabel("参数设定");
    QLabel * Help_label = new QLabel("  帮助");
    QLabel * Exit_label = new QLabel("  退出");
    QVBoxLayout * System_layout = new QVBoxLayout;
    QVBoxLayout * Calibration_and_Observation_layout = new QVBoxLayout;
    QVBoxLayout * Parameter_Setting_layout = new QVBoxLayout;
    QVBoxLayout * Help_layout = new QVBoxLayout;
    QVBoxLayout * Exit_layout = new QVBoxLayout;

    //设定顶端按钮
    main_operations_details_widget = new QWidget;
    main_operations_details_layout = new QHBoxLayout;
    System = new QPushButton;
    System_icon = new QIcon(":/images/res/system.png");
    System->setFixedSize(45,45);
    System->setIcon(*System_icon);
    System->setIconSize(QSize(40,40));

    Calibration_and_Observation = new QPushButton;
    Calibration_and_Observation_icon = new QIcon(":/images/res/Calibration_and_Observation.png");
    Calibration_and_Observation->setFixedSize(45,45);
    Calibration_and_Observation->setIcon(*Calibration_and_Observation_icon);
    Calibration_and_Observation->setFlat(true);
    Calibration_and_Observation->setIconSize(QSize(40,40));
    Calibration_and_Observation->setStyleSheet("QPushButton{background: transparent;}");   //设置点击之后没有阴影

    Parameter_Setting = new QPushButton;
    Parameter_Setting_icon  = new QIcon(":/images/res/Parameter_Setting.png");
    Parameter_Setting->setFixedSize(45,45);
    Parameter_Setting->setIcon(*Parameter_Setting_icon);
    Parameter_Setting->setIconSize(QSize(40,40));


    //设定次顶端按钮
    main_operations_Widget = new QWidget();
    main_operations_layout = new QHBoxLayout();

    Help = new QPushButton;
    Help_icon = new QIcon(":/images/res/Help.png");
    Help->setFixedSize(40,40);
    Help->setIcon(*Help_icon);
    Help->setIconSize(QSize(30,30));

    Exit = new QPushButton;
    Exit_icon = new QIcon(":/images/res/Exit.png");
    Exit->setFixedSize(40,40);
    Exit->setIcon(*Exit_icon);
    Exit->setIconSize(QSize(30,30));

    System_layout->addWidget(System);
    System_layout->addWidget(System_label);
    Calibration_and_Observation_layout->addWidget(Calibration_and_Observation);
    Calibration_and_Observation_layout->addWidget(Calibration_and_Observation_label);
    Parameter_Setting_layout->addWidget(Parameter_Setting);
    Parameter_Setting_layout->addWidget(Parameter_Setting_label);
    Help_layout->addWidget(Help);
    Help_layout->addWidget(Help_label);
    Exit_layout->addWidget(Exit);
    Exit_layout->addWidget(Exit_label);

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
