#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::softOn(){
    ui->lightOne->setStyleSheet("background-color: green");
    delay(1);
    ui->lightOne->setStyleSheet("background-color: white");
    ui->lightTwo->setStyleSheet("background-color: green");
    delay(1);
    ui->lightTwo->setStyleSheet("background-color: white");
    ui->lightThree->setStyleSheet("background-color: green");
    delay(1);

    ui->lightThree->setStyleSheet("background-color: white");
    ui->lightFour->setStyleSheet("background-color: yellow");
    delay(1);
    ui->lightFour->setStyleSheet("background-color: white");
    ui->lightFive->setStyleSheet("background-color: yellow");
    delay(1);
    ui->lightFive->setStyleSheet("background-color: white");
    ui->lightSix->setStyleSheet("background-color: yellow");
    delay(1);

    ui->lightSix->setStyleSheet("background-color: white");
    ui->lightSeven->setStyleSheet("background-color: red");
    delay(1);
    ui->lightSeven->setStyleSheet("background-color: white");
    ui->lightEight->setStyleSheet("background-color: red");
    delay(1);
    ui->lightEight->setStyleSheet("background-color: white");

}

void MainWindow::softOff(){
    ui->lightEight->setStyleSheet("background-color: red");
    delay(1);
    ui->lightEight->setStyleSheet("background-color: white");
    ui->lightSeven->setStyleSheet("background-color: red");
    delay(1);

    ui->lightSeven->setStyleSheet("background-color: white");
    ui->lightSix->setStyleSheet("background-color: yellow");
    delay(1);
    ui->lightSix->setStyleSheet("background-color: white");
    ui->lightFive->setStyleSheet("background-color: yellow");
    delay(1);
    ui->lightFive->setStyleSheet("background-color: white");
    ui->lightFour->setStyleSheet("background-color: yellow");
    delay(1);

    ui->lightFour->setStyleSheet("background-color: white");
    ui->lightThree->setStyleSheet("background-color: green");
    delay(1);
    ui->lightThree->setStyleSheet("background-color: white");
    ui->lightTwo->setStyleSheet("background-color: green");
    delay(1);
    ui->lightTwo->setStyleSheet("background-color: white");
    ui->lightOne->setStyleSheet("background-color: green");
    delay(1);
    ui->lightOne->setStyleSheet("background-color: white");
}

//Online Code to make code freeze and not GUI
// https://stackoverflow.com/questions/3752742/how-do-i-create-a-pause-wait-function-using-qt

void MainWindow::delay(int secs)
{
    QTime dieTime = QTime::currentTime().addSecs(secs);
    while (QTime::currentTime() < dieTime)
        QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
}

void MainWindow::on_lightOne_clicked()
{
    softOn();
    softOff();
}
