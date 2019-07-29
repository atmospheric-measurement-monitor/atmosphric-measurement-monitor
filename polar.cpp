#include "polar.h"
#include <QtGui/QMouseEvent>
#include <QtCore/QDebug>
#include <QtCharts/QAbstractAxis>
#include <QtCharts/QValueAxis>
#include <QtCharts/QScatterSeries>

QT_CHARTS_USE_NAMESPACE

ChartView::ChartView(QWidget *parent)
    : QChartView(parent)
{
    const qreal angularMin = -10;
    const qreal angularMax = 10;

    const qreal radialMin = -10;
    const qreal radialMax = 10;

    QScatterSeries *series1 = new QScatterSeries();
    series1->setName("Satellite Position");
    series1->append(3,4);
    series1->append(-2,6);
    series1->append(-1,5);
    series1->append(6,9);
    series1->append(8,3);
    series1->append(7,-5);



    QPolarChart *chart = new QPolarChart();

    chart->addSeries(series1);

    QValueAxis *angularAxis = new QValueAxis();
    angularAxis->setTickCount(9); // First and last ticks are co-located on 0/360 angle.
    angularAxis->setLabelFormat("%.1f");
    angularAxis->setShadesVisible(true);
    angularAxis->setShadesBrush(QBrush(QColor(139,129,76)));
    chart->addAxis(angularAxis, QPolarChart::PolarOrientationAngular);

    QValueAxis *radialAxis = new QValueAxis();
    radialAxis->setTickCount(9);
    radialAxis->setLabelFormat("%d");
    chart->addAxis(radialAxis, QPolarChart::PolarOrientationRadial);
    //![2]

    series1->attachAxis(radialAxis);
    series1->attachAxis(angularAxis);


    radialAxis->setRange(radialMin, radialMax);
    angularAxis->setRange(angularMin, angularMax);
    this->setChart(chart);
    //this->setMinimumSize(700,700);
    this->setRenderHint(QPainter::Antialiasing);
}

void ChartView::keyPressEvent(QKeyEvent *event)
{
    switch (event->key()) {
    case Qt::Key_Plus:
        chart()->zoomIn();
        break;
    case Qt::Key_Minus:
        chart()->zoomOut();
        break;
    case Qt::Key_Left:
        chart()->scroll(-1.0, 0);
        break;
    case Qt::Key_Right:
        chart()->scroll(1.0, 0);
        break;
    case Qt::Key_Up:
        chart()->scroll(0, 1.0);
        break;
    case Qt::Key_Down:
        chart()->scroll(0, -1.0);
        break;
    default:
        QGraphicsView::keyPressEvent(event);
        break;
    }
}
