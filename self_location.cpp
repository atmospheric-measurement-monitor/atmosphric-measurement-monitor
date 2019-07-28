#include "self_location.h"
self_location::self_location()
{
    window = new QWidget;
    top_window = new QWidget;
    bottom_window = new QWidget;
    information = new QLabel("方位角");
    angle = new QLineEdit;
    confirm = new QPushButton("确定");
    cancle = new QPushButton("取消");
    connect(confirm,SIGNAL(clicked(bool)),this,SLOT(confirm_response()));
    connect(cancle,SIGNAL(clicked(bool)),this,SLOT(cancle_response()));
    top_layout = new QHBoxLayout;
    top_layout->addWidget(information);
    top_layout->addWidget(angle);
    top_window->setLayout(top_layout);
    bottom_layout = new QHBoxLayout;
    bottom_layout->addWidget(confirm);
    bottom_layout->addWidget(cancle);
    bottom_window->setLayout(bottom_layout);
    layout = new QVBoxLayout;
    layout->addWidget(top_window);
    layout->addWidget(bottom_window);
    window->setLayout(layout);
    window->setFixedSize(300,130);
    window->setWindowTitle("自定标设置");
    window->show();
}
self_location::~self_location()
{

}
void self_location::confirm_response()
{

}
void self_location::cancle_response()
{
    window->close();
}
