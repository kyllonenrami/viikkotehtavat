#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <Qstring>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->n1,&QPushButton::clicked,this,&MainWindow::numberClickedHandler);
    connect(ui->n2,&QPushButton::clicked,this,&MainWindow::numberClickedHandler);
    connect(ui->n3,&QPushButton::clicked,this,&MainWindow::numberClickedHandler);
    connect(ui->n4,&QPushButton::clicked,this,&MainWindow::numberClickedHandler);
    connect(ui->n5,&QPushButton::clicked,this,&MainWindow::numberClickedHandler);
    connect(ui->n6,&QPushButton::clicked,this,&MainWindow::numberClickedHandler);
    connect(ui->n7,&QPushButton::clicked,this,&MainWindow::numberClickedHandler);
    connect(ui->n8,&QPushButton::clicked,this,&MainWindow::numberClickedHandler);
    connect(ui->n9,&QPushButton::clicked,this,&MainWindow::numberClickedHandler);
    connect(ui->n0,&QPushButton::clicked,this,&MainWindow::numberClickedHandler);

    connect(ui->clr,&QPushButton::clicked,this,&MainWindow::clearClickHandler);
    connect(ui->ent,&QPushButton::clicked,this,&MainWindow::enterClickHandler);

    connect(ui->div4,&QPushButton::clicked,this,&MainWindow::addSubMulDivClickHandler);
    connect(ui->mul3,&QPushButton::clicked,this,&MainWindow::addSubMulDivClickHandler);
    connect(ui->add1,&QPushButton::clicked,this,&MainWindow::addSubMulDivClickHandler);
    connect(ui->sub2,&QPushButton::clicked,this,&MainWindow::addSubMulDivClickHandler);
    state=0;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::numberClickedHandler()
{
    QPushButton * button = qobject_cast<QPushButton *>(sender());
    QString numberName = button->objectName();
    qDebug()<<numberName.at(1);

    if(state==0)
    {
        ui->laatikko1->setText(ui->laatikko1->text()+numberName.at(1));
    }
    else
    {
        ui->laatikko2->setText(ui->laatikko2->text()+numberName.at(1));
    }
}

void MainWindow::clearClickHandler()
{
    ui->laatikko1->setText("");
    ui->laatikko2->setText("");
    ui->result->setText("");
    state = 0;
}

void MainWindow::enterClickHandler()
{
    number1=ui->laatikko1->text();
    number2=ui->laatikko2->text();

    float num1 = number1.toFloat();
    float num2 = number2.toFloat();

    switch (operand) {

    case 1:
        result = num1 + num2;
        break;

    case 2:
        result = num1 - num2;
        break;

    case 3:
        result = num1 * num2;
        break;

    case 4:
        result = num1 / num2;
        break;
    }
    ui->result->setText(QString::number(result));
}


void MainWindow::addSubMulDivClickHandler()
{
    state = 1;
    QPushButton * button = qobject_cast<QPushButton *> (sender());
    QString numberName = button->objectName();
    qDebug()<<numberName.at(3);
    QString N = numberName.at(3);
    bool ok;
    operand = N.toInt(&ok);
    qDebug()<<"ok ="<<ok;
}

void MainWindow::resetLineEdits()
{

}

void MainWindow::on_pushButton_clicked()
{
    ui->lineEdit->setText(QString::number(ui->lineEdit->text().toInt()+1));
}


void MainWindow::on_pushButton_2_clicked()
{
    ui->lineEdit->setText("");
}

