#include"mybutton.h"
MyButton::MyButton(QWidget* parent) :QPushButton(parent)
{
    this->setStyleSheet("QPushButton:hover{color:red;}");
}
MyButton::~MyButton()
{

}
