#include "caculate_self_location.h"
caculate_self_location::caculate_self_location()
{
    window = new QWidget;
    top_window = new QWidget;
    middle_window = new QWidget;
    button_window = new QWidget;
    layout = new QVBoxLayout;
    top_layout = new QHBoxLayout;
    middle_layout = new QHBoxLayout;
    button_layout = new QHBoxLayout;
    information = new QLabel("数据文件");
    path = new QLineEdit();
    brower = new QPushButton("浏览");
    confirm = new QPushButton("确认");
    cancle = new QPushButton("取消");
    connect(brower,SIGNAL(clicked(bool)),this,SLOT(brower_response()));
    connect(confirm,SIGNAL(clicked(bool)),this,SLOT(confirm_response()));
    connect(cancle,SIGNAL(clicked(bool)),this,SLOT(cancle_response()));
    top_layout ->addWidget(information);
    middle_layout->addWidget(path);
    middle_layout->addWidget(brower);
    button_layout->addWidget(confirm);
    button_layout->addWidget(cancle);
    top_window->setLayout(top_layout);
    middle_window->setLayout(middle_layout);
    button_window->setLayout(button_layout);
    layout->addWidget(top_window);
    layout->addWidget(middle_window);
    layout->addWidget(button_window);
    window->setLayout(layout);
    window->setFixedSize(300,150);
    window->setWindowTitle("自定标计算");
    window->show();
}
caculate_self_location::~caculate_self_location()
{

}
void caculate_self_location::brower_response()
{
}
void caculate_self_location::confirm_response()
{
    window->close();
}
void caculate_self_location::cancle_response()
{
    window->close();
}
