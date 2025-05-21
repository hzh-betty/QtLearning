#include "widget.h"
#include "ui_widget.h"
#include "mylabel.h"
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    mylabel* label = new mylabel (this);
      label->setText("hello world");
}

Widget::~Widget()
{
    delete ui;
}

