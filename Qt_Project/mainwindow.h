#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTime>
#include <QTimer>
#include <QTextStream>
#include "battery.h"
#include "record.h"

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
    void saveTherapy();
    bool checkAll();
    void updateTherapy();
    
private slots:
    void togglePower();
    void increasePower();

    void on_sessionButton_clicked();

    void on_timeButton_clicked();

    void on_checkBtn_clicked();
    void updateCountdown();
    void toggleIntensity(bool);
    void on_userButton_clicked();
    void on_replay_clicked();
    void drainBattery();


private:
    Ui::MainWindow *ui;
    bool power;
    QTimer *timer;
    QTimer *batTimer;
    Battery bat;
    int timeSelection;
    int sessionSelection;
    int userSelection;
    Record* allRecords[10];
    int numRecs;
    int sessionTimer;
    int intensity;
};
#endif // MAINWINDOW_H
