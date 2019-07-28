#include "exit.h"
exit_confirm::exit_confirm()
{
    window = new QWidget;
    top_widget = new QWidget;
    bottom_widget = new QWidget;
    informations = new QLabel("确认退出程序吗");
    confirm = new QPushButton("确定");
    cancle = new QPushButton("取消");
    QObject::connect(confirm,SIGNAL(clicked(bool)),this,SLOT(confirm_response()));
    QObject::connect(cancle,SIGNAL(clicked(bool)),this,SLOT(cancle_response()));
    top_layout = new QHBoxLayout;
    top_layout->addWidget(informations);
    top_widget->setLayout(top_layout);
    bottom_layout = new QHBoxLayout;
    bottom_layout->addWidget(confirm);
    bottom_layout->addWidget(cancle);
    bottom_widget->setLayout(bottom_layout);
    window_layout = new QVBoxLayout;
    window_layout->addWidget(top_widget);
    window_layout->addWidget(bottom_widget);
    window->setLayout(window_layout);
    window->setWindowTitle("退出确认");
    window->setFixedSize(200,130);
    window->show();
}
exit_confirm::~exit_confirm()
{
    ;
}
void exit_confirm::confirm_response()
{
    window->close();
    QApplication::quit();
}
void exit_confirm::cancle_response()
{
    window->close();
}
