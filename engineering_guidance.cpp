#include "engineering_guidance.h"
engineering_guidance::engineering_guidance()
{
    window = new QWidget;
    top_window = new QWidget;
    middle_window = new QWidget;
    button_window = new QWidget;
    layout = new QVBoxLayout;
    top_layout = new QHBoxLayout;
    middle_layout = new QHBoxLayout;
    button_layout = new QHBoxLayout;
    type = new QComboBox;
    QStringList types;
    types<<"同步卫星引导"<<"非同步卫星引导"<<"激光系统引导";
    type->addItems(types);
    path = new QLineEdit();
    brower = new QPushButton("浏览");
    confirm = new QPushButton("确认");
    cancle = new QPushButton("取消");
    connect(brower,SIGNAL(clicked(bool)),this,SLOT(brower_response()));
    connect(confirm,SIGNAL(clicked(bool)),this,SLOT(confirm_response()));
    connect(cancle,SIGNAL(clicked(bool)),this,SLOT(cancle_response()));
    top_layout ->addWidget(type);
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
    window->setWindowTitle("工程应用模式设置");
    window->show();
}
engineering_guidance::~engineering_guidance()
{

}
void engineering_guidance::brower_response()
{
}
void engineering_guidance::confirm_response()
{
    window->close();
}
void engineering_guidance::cancle_response()
{
    window->close();
}
