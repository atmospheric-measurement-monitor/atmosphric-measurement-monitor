#include "cthermometer_widget.h"
#include "ui_cthermometer_widget.h"
#include <QLayout>
#include <QLabel>
cthermometer_widget::cthermometer_widget(QWidget *parent) :
    QWidget(parent)
{
    thermometer1 = new CThermometer(this);
    thermometer2=new CThermometer(this);
    thermometer3=new CThermometer(this);
    thermometer1->setValueWithAnimation(39);
    thermometer2->setValueWithAnimation(78);
    thermometer3->setValueWithAnimation(55);
    QHBoxLayout* layout = new QHBoxLayout;
    layout->addWidget(thermometer1);
    layout->addWidget(thermometer2);
    layout->addWidget(thermometer3);
    layout->setSpacing(40);
    this->setLayout(layout);
    this->setMinimumSize(400,400);
}

cthermometer_widget::~cthermometer_widget()
{
}
