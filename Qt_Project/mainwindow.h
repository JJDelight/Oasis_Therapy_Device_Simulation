#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTime>
#include <QTimer>
#include "battery.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void softOn();
    void softOff();
    void delay(int seconds);// Function to delay a function for x seconds
    void displayBattery();
    
private slots:
    void togglePower();
    void increasePower();

private:
    Ui::MainWindow *ui;
    bool power;
    QTimer *timer;
    Battery bat;
};
#endif // MAINWINDOW_H
