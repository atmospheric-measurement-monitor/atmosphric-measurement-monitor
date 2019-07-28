#ifndef CTHERMOMETER_WIDGET_H
#define CTHERMOMETER_WIDGET_H
#include <QWidget>
#include "cthermometer.h"

class cthermometer_widget : public QWidget
{
    Q_OBJECT

public:
    explicit cthermometer_widget(QWidget *parent = 0);
    ~cthermometer_widget();


private:
    CThermometer* thermometer;
    CThermometer* thermometer_1;
    CThermometer* thermometer_2;
};

#endif // CTHERMOMETER_WIDGET_H
