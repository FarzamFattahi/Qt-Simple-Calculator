#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <iostream>
#include <QJSEngine>
#include <string.h>

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_BTN1_clicked()
{
    auto MyStr=  ui->textEdit->toPlainText();
    MyStr.append('1');
    ui->textEdit->setText(MyStr);
}


void MainWindow::on_BTN2_clicked()
{
    auto MyStr=  ui->textEdit->toPlainText();
    MyStr.append('2');
    ui->textEdit->setText(MyStr);
}


void MainWindow::on_BTN3_clicked()
{
    auto MyStr=  ui->textEdit->toPlainText();
    MyStr.append('3');
    ui->textEdit->setText(MyStr);
}


void MainWindow::on_BTN4_clicked()
{
    auto MyStr=  ui->textEdit->toPlainText();
    MyStr.append('4');
    ui->textEdit->setText(MyStr);
}


void MainWindow::on_BTN5_clicked()
{
    auto MyStr=  ui->textEdit->toPlainText();
    MyStr.append('5');
    ui->textEdit->setText(MyStr);
}


void MainWindow::on_BTN6_clicked()
{
    auto MyStr=  ui->textEdit->toPlainText();
    MyStr.append('6');
    ui->textEdit->setText(MyStr);
}


void MainWindow::on_BTN7_clicked()
{
    auto MyStr=  ui->textEdit->toPlainText();
    MyStr.append('7');
    ui->textEdit->setText(MyStr);
}


void MainWindow::on_BTN8_clicked()
{
    auto MyStr=  ui->textEdit->toPlainText();
    MyStr.append('8');
    ui->textEdit->setText(MyStr);
}


void MainWindow::on_BTN9_clicked()
{
    auto MyStr=  ui->textEdit->toPlainText();
    MyStr.append('9');
    ui->textEdit->setText(MyStr);
}


void MainWindow::on_BTN0_clicked()
{
    auto MyStr=  ui->textEdit->toPlainText();
    MyStr.append('0');
    ui->textEdit->setText(MyStr);
}


void MainWindow::on_BTNDot_clicked()
{
    auto MyStr=  ui->textEdit->toPlainText();
    MyStr.append('.');
    ui->textEdit->setText(MyStr);
}


void MainWindow::on_BTNSum_clicked()
{
    auto MyStr=  ui->textEdit->toPlainText();
    int length=MyStr.length();
    if(MyStr[length-1]!='+' && MyStr[length-1]!='-' && MyStr[length-1]!='*' && MyStr[length-1]!='/'){
        MyStr.append('+');
        ui->textEdit->setText(MyStr);



    }
}


void MainWindow::on_BTNSub_clicked()
{
    auto MyStr=  ui->textEdit->toPlainText();
    int length=MyStr.length();
    if(MyStr[length-1]!='+' && MyStr[length-1]!='-' && MyStr[length-1]!='*' && MyStr[length-1]!='/'){
        MyStr.append('-');
        ui->textEdit->setText(MyStr);
    }
}


void MainWindow::on_BTNMul_clicked()
{
    auto MyStr=  ui->textEdit->toPlainText();
    int length=MyStr.length();
    if(MyStr[length-1]!='+' && MyStr[length-1]!='-' && MyStr[length-1]!='*' && MyStr[length-1]!='/'){
        MyStr.append('*');
        ui->textEdit->setText(MyStr);
    }
}


void MainWindow::on_BNTDiv_clicked()
{
    auto MyStr=  ui->textEdit->toPlainText();
    int length=MyStr.length();
    if(MyStr[length-1]!='+' && MyStr[length-1]!='-' && MyStr[length-1]!='*' && MyStr[length-1]!='/'){
        MyStr.append('/');
        ui->textEdit->setText(MyStr);
    }
}


void MainWindow::on_BTNDelete_clicked()
{
    auto MyStr=  ui->textEdit->toPlainText();
    MyStr.chop(1);
    ui->textEdit->setText(MyStr);
}


void MainWindow::on_BTNClear_clicked()
{
    ui->textEdit->clear();
}


void MainWindow::on_BTNEq_clicked()
{


    QJSEngine myEngine;
    QString input=ui->textEdit->toPlainText();
    QJSValue ans = myEngine.evaluate(input);
    ui->textEdit->setText(ans.toString());
}

