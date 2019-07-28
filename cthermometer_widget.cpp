#include "cthermometer_widget.h"
#include "ui_cthermometer_widget.h"
#include <QLayout>
#include <QLabel>
cthermometer_widget::cthermometer_widget(QWidget *parent) :
    QWidget(parent)
{
    thermometer = new CThermometer(this);
    thermometer->setValueWithAnimation(39);
    QHBoxLayout* layout = new QHBoxLayout;
    layout->addWidget(thermometer);
    this->setLayout(layout);
    this->resize(60,300);
}

cthermometer_widget::~cthermometer_widget()
{
}
