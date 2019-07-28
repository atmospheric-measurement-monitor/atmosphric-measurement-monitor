#include "communication.h"
communication::communication()
{
    window = new QWidget;
    type_widget = new QWidget;
    sifu_widget = new QWidget;
    reciver_widget = new QWidget;
    speed_widget = new QWidget;
    button_widget = new QWidget;
    layout = new QVBoxLayout;
    type_layout = new QHBoxLayout;
    sifu_layout = new QHBoxLayout;
    reciver_layout = new QHBoxLayout;
    speed_layout = new QHBoxLayout;
    button_layout = new QHBoxLayout;

    type = new QComboBox;
    QStringList strings;
    strings<<"CAN通信"<<"网络通信";
    type->addItems(strings);

    sifu_CAN = new QLabel("伺服CAN");
    sifu_conmunication_speed = new QLabel("通信速率");
    sifu_CAN_combobox = new QComboBox;
    strings.clear();
    strings<<"CAN 0"<<"CAN 1"<<"CAN 2"<<"CAN 3"<<"CAN 4";
    sifu_CAN_combobox->addItems(strings);
    sifu_conmunication_speed_conbobox = new QComboBox;
    strings.clear();
    strings<<"10K"<<"20K"<<"20K"<<"100K"<<"125K"<<"200K"<<"250K"<<"500K"<<"800K"<<"1000k";
    sifu_conmunication_speed_conbobox->addItems(strings);

    reciver_CAN = new QLabel("接收机CAN");
    reciver_conmunication_speed = new QLabel("通信速率");
    reciver_CAN_combobox = new QComboBox;
    strings.clear();
    strings<<"CAN 0"<<"CAN 1"<<"CAN 2"<<"CAN 3"<<"CAN 4";
    reciver_CAN_combobox->addItems(strings);
    reciver_conmunication_speed_combobox = new QComboBox;
    strings.clear();
    strings<<"10K"<<"20K"<<"20K"<<"100K"<<"125K"<<"200K"<<"250K"<<"500K"<<"800K"<<"1000k";
    reciver_conmunication_speed_combobox->addItems(strings);

    location_speed = new QLabel("方位转速");
    angle_speed = new QLabel("俯仰转速");
    location_speed_data = new QLineEdit("11");
    angle_speed_data  = new QLineEdit("11");

    confirm = new QPushButton("确认");
    cancle  = new QPushButton("取消");
    connect(confirm,SIGNAL(clicked(bool)),this,SLOT(confirm_response()));
    connect(cancle,SIGNAL(clicked(bool)),this,SLOT(cancle_response()));


    type_layout->addWidget(type);
    type_widget->setLayout(type_layout);
    sifu_layout->addWidget(sifu_CAN);
    sifu_layout->addWidget(sifu_CAN_combobox);
    sifu_layout->addWidget(sifu_conmunication_speed);
    sifu_layout->addWidget(sifu_conmunication_speed_conbobox);
    sifu_widget->setLayout(sifu_layout);
    reciver_layout->addWidget(reciver_CAN);
    reciver_layout->addWidget(reciver_CAN_combobox);
    reciver_layout->addWidget(reciver_conmunication_speed);
    reciver_layout->addWidget(reciver_conmunication_speed_combobox);
    reciver_widget->setLayout(reciver_layout);
    speed_layout->addWidget(location_speed);
    speed_layout->addWidget(location_speed_data);
    speed_layout->addWidget(angle_speed);
    speed_layout->addWidget(angle_speed_data);
    speed_widget->setLayout(speed_layout);
    button_layout->addWidget(confirm);
    button_layout->addWidget(cancle);
    button_widget->setLayout(button_layout);

    layout->addWidget(type_widget);
    layout->addWidget(sifu_widget);
    layout->addWidget(reciver_widget);
    layout->addWidget(speed_widget);
    layout->addWidget(button_widget);
    window->setLayout(layout);
    window->setFixedSize(400,300);
    window->setWindowTitle("通信参数设置");
    window->show();
}
communication::~communication()
{
    ;
}
void communication::confirm_response()
{
    window->close();
}
void communication::cancle_response()
{
    window->close();
}
