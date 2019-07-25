#ifndef DRAW_FRAME_H
#define DRAW_FRAME_H
#include <QWidget>
#include <QImage>
#include <QPainter>
#include <QPen>
#include <QMainWindow>
class zhexian : public QWidget
{
private:
    QImage image;
public:
    zhexian(QWidget * paarent = 0);
    ~zhexian();
    void Paint();
    void paintEvent(QPaintEvent *);
};
#endif // DRAW_FRAME_H
