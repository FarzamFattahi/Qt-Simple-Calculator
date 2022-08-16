#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_BTN1_clicked();

    void on_BTN2_clicked();

    void on_BTN3_clicked();

    void on_BTN4_clicked();

    void on_BTN5_clicked();

    void on_BTN6_clicked();

    void on_BTN7_clicked();

    void on_BTN8_clicked();

    void on_BTN9_clicked();

    void on_BTN0_clicked();

    void on_BTNDot_clicked();

    void on_BTNSum_clicked();

    void on_BTNSub_clicked();

    void on_BTNMul_clicked();

    void on_BNTDiv_clicked();

    void on_BTNDelete_clicked();

    void on_BTNClear_clicked();

    void on_BTNEq_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
