//这是卫星的位置图
#ifndef POLOR_H
#define POLOR_H
#include <QtCharts/QChartView>
#include <QtCharts/QPolarChart>
QT_CHARTS_USE_NAMESPACE

class ChartView : public QChartView
{
public:
    ChartView(QWidget *parent = 0);

protected:
    void keyPressEvent(QKeyEvent *event);

};

#endif // POLOR_H
