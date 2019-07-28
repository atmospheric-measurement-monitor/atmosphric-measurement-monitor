//这是右侧速度显示
#ifndef MYSPEED_H
#define MYSPEED_H
#include <QMainWindow>
#include <QWidget>
#include <QTimer>
class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget (QWidget *parent = 0);
    ~Widget (){}
protected:
    void thresholdManager();
    void paintEvent(QPaintEvent *);

    void drawCrown(QPainter *painter);
    void drawBackground(QPainter *painter);
    void drawScale(QPainter *painter);
    void drawScaleNum(QPainter *painter);
    void drawTitle(QPainter *painter);
    void drawIndicator(QPainter *painter);
    void drawNumericValue(QPainter *painter);

private:
    bool m_numericIndicatorEnabled;
    QColor m_crownColor;
    QColor m_foreground;
    QColor m_background;

    QString m_units;
    QString m_title;

    int m_scaleMajor;
    int m_scaleMinor;

    int m_maxValue, m_minValue;

    int m_startAngle,m_endAngle;

    double m_value;
    int m_precision;
    QTimer *m_updateTimer;
public Q_SLOTS:
      void UpdateAngle();
};
#endif // MYSPEED_H
