#include "mylabel.h"
#include <QDebug>
mylabel::mylabel(QWidget* parent)
    :QLabel(parent)
{

}

mylabel::~mylabel()
{
    qDebug()<<"hello world";
}
