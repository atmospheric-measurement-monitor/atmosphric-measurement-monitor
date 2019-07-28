#include "device.h"
device::device()
{
    window = new QWidget;
    type_widget = new QWidget;
    number_widget = new QWidget;
    description_widget = new QWidget;
    ip_widget = new QWidget;
    button_widget = new QWidget;
    layout = new QVBoxLayout;
    type_layout = new QHBoxLayout;
    number_layout = new QHBoxLayout;
    description_layout = new QHBoxLayout;
    ip_layout =new  QHBoxLayout;
    button_layout = new QHBoxLayout;
    type = new QLabel("设备类型");
    number = new QLabel("设备编号");
    description = new QLabel("设备描述");
    ip = new QLabel("设备IP");
    type_data = new QLineEdit("11");
    number_data = new QLineEdit("11");
    description_data = new QLineEdit("11");
    ip_data= new QLineEdit("192.168.1.1");
    confirm = new QPushButton("确定");
    cancle = new QPushButton("取消");

    type_layout->addWidget(type);
    type_layout->addWidget(type_data);
    type_widget->setLayout(type_layout);
    number_layout->addWidget(number);
    number_layout->addWidget(number_data);
    number_widget->setLayout(number_layout);
    description_layout->addWidget(description);
    description_layout->addWidget(description_data);
    description_widget->setLayout(description_layout);
    ip_layout->addWidget(ip);
    ip_layout->addWidget(ip_data);
    ip_widget->setLayout(ip_layout);
    button_layout->addWidget(confirm);
    button_layout->addWidget(cancle);
    button_widget->setLayout(button_layout);

    layout->addWidget(type_widget);
    layout->addWidget(number_widget);
    layout->addWidget(description_widget);
    layout->addWidget(ip_widget);
    layout->addWidget(button_widget);
    window->setLayout(layout);
    window->setWindowTitle("设备参数设定");
    window->setFixedSize(250,250);
    window->show();
}
device::~device()
{
    ;
}
void device::confirm_response()
{
    window->close();
}
void device::cancle_response()
{
    window->close();
}
