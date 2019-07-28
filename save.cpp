#include "save.h"
save::save()
{
    window = new QWidget;
    top_window = new QWidget;
    button_window = new QWidget;
    layout = new QVBoxLayout;
    button_layout = new QHBoxLayout;
    top_layout = new QHBoxLayout;
    path = new QLineEdit("C:\\Users\\china\\Desktop\\");
    brower = new QPushButton("浏览");
    confirm = new QPushButton("确定");
    cancle = new QPushButton("取消");
    connect(confirm,SIGNAL(clicked(bool)),this,SLOT(confirm_response()));
    connect(cancle,SIGNAL(clicked(bool)),this,SLOT(cancle_response()));
    top_layout ->addWidget(path);
    top_layout ->addWidget(brower);
    button_layout->addWidget(confirm);
    button_layout->addWidget(cancle);
    button_window->setLayout(button_layout);
    top_window ->setLayout(top_layout);
    layout->addWidget(top_window);
    layout->addWidget(button_window);
    window->setLayout(layout);
    window->setFixedSize(300,130);
    window->setWindowTitle("数据保存位置");
    window->show();
}
save::~save()
{

}
void save::confirm_response()
{
    window->close();
}
void save::cancle_response()
{
    window->close();
}
