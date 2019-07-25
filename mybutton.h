#ifndef MYBUTTON_H
#define MYBUTTON_H
#include<QPushButton>
#include<QEvent>
class MyButton :public QPushButton
{
    Q_OBJECT
public:
    MyButton(QWidget *parent = 0);
    ~MyButton();
};
#endif // MYBUTTON_H
