#include "cthermometer_widget.h"
#include "ui_cthermometer_widget.h"
#include <QLayout>

cthermometer_widget::cthermometer_widget(QWidget *parent) :
    QWidget(parent)
{
    thermometer = new CThermometer(this);
    thermometer->setValueWithAnimation(39);
    QHBoxLayout* layout = new QHBoxLayout;
    layout->addWidget(thermometer);
    layout->setMargin(40);
    this->setLayout(layout);
    this->setMinimumSize(400,400);
}

cthermometer_widget::~cthermometer_widget()
{
}
