#include "mainwindow.h"

#include <QApplication>

#include <iostream>
#include <QJSEngine>
#include <string.h>

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    QJSEngine myEngine;
    QString str="1+2";
    QJSValue ans = myEngine.evaluate(str);
    string m = (to_string( ans.toNumber()));
    return a.exec();
}
