#ifndef ENGINEERING_GUIDANCE_H
#define ENGINEERING_GUIDANCE_H
#include <QObject>
#include <QWidget>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QlineEdit>
#include <QPushButton>
#include <QComboBox>
#include <QStringList>
class engineering_guidance : public QObject
{
    Q_OBJECT
private:
    QWidget * window;
    QWidget * top_window;
    QWidget * middle_window;
    QWidget * button_window;
    QHBoxLayout * top_layout;
    QHBoxLayout * middle_layout;
    QHBoxLayout * button_layout;
    QVBoxLayout * layout;
    QComboBox * type;
    QLineEdit * path;
    QPushButton * brower;
    QPushButton * confirm;
    QPushButton * cancle;
public:
    engineering_guidance ();
    ~engineering_guidance();
public slots:
    void brower_response();
    void confirm_response();
    void cancle_response();
};
#endif // ENGINEERING_GUIDANCE_H
