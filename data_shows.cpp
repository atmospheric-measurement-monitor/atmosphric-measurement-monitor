#include "data_shows.h"
data_shows::data_shows()
{
    window = new QWidget;
    top_window = new QWidget;
    button_window = new QWidget;
    layout = new QVBoxLayout;
    button_layout = new QHBoxLayout;
    top_layout = new QHBoxLayout;
    information = new QLabel("采样频率 单位（HZ）");
    data = new QLineEdit;
    confirm = new QPushButton("确定");
    cancle = new QPushButton("取消");
    connect(confirm,SIGNAL(clicked(bool)),this,SLOT(confirm_response()));
    connect(cancle,SIGNAL(clicked(bool)),this,SLOT(cancle_response()));
    top_layout ->addWidget(information);
    top_layout ->addWidget(data);
    button_layout->addWidget(confirm);
    button_layout->addWidget(cancle);
    button_window->setLayout(button_layout);
    top_window ->setLayout(top_layout);
    layout->addWidget(top_window);
    layout->addWidget(button_window);
    window->setLayout(layout);
    window->setFixedSize(250,130);
    window->setWindowTitle("数据显示");
    window->show();
}
data_shows::~data_shows()
{
    ;
}
void data_shows::confirm_response()
{
    window->close();
}
void data_shows::cancle_response()
{
    window->close();
}
