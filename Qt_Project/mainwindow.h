#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTime>

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

private slots:
    void on_lightOne_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
