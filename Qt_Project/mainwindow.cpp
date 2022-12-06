#include "mainwindow.h"
#include "ui_mainwindow.h"

//#include "session.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    power = false;
    bat = Battery();
    timeSelection = 0;
    sessionSelection = 0;
    userSelection = 0;
    numRecs = 0;
    intensity = 1;

    timer = new QTimer(this);
    timer->setSingleShot(true);
    connect(timer, &QTimer::timeout, this, &MainWindow::togglePower);

    batTimer = new QTimer(this);    //Interval of time for battery to display
    batTimer->setInterval(30000);
    connect(batTimer, &QTimer::timeout, this, &MainWindow::displayBattery);
    batTimer->start();

    sessionTimer = 0;

    //connect functions
    connect(ui->powerButton, &QPushButton::pressed, this, &MainWindow::togglePower);
    connect(ui->rechargeBattery, &QPushButton::pressed, this, &MainWindow::increasePower);
    connect(ui->increaseBtn, &QPushButton::pressed, this, [this](){ emit MainWindow::toggleIntensity(true);});
    connect(ui->decreaseBtn, &QPushButton::pressed, this, [this](){ emit MainWindow::toggleIntensity(false);});
}

MainWindow::~MainWindow(){
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

void MainWindow::togglePower(){
    if(power){
        ui->powerLabel->setStyleSheet("background-color: white");
        power = !power;
        timer->stop();
    }else{
        ui->powerLabel->setStyleSheet("background-color: yellow");
        power = !power;
        timer->start(20000); //Timer to turn off device if no function called (20 seconds)
    }
}


void MainWindow::increasePower(){
    if (!checkAll()){
        return;
    }
    bat.fullPower();
}

void MainWindow::delay(int secs){
    QTime dieTime = QTime::currentTime().addSecs(secs);
    while (QTime::currentTime() < dieTime)
        QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
}

void MainWindow::displayBattery(){
    if(!power){return;}

    if(sessionTimer<=0){
        drainBattery();
    }
    batTimer->stop();
    batTimer->start(30000);
    int div = bat.getLevel() / 125;
    QTextStream(stdout) << "div: " << div << "Battery %: "<< bat.getLevel() << endl;

    switch(div){
        case 8:
            ui->lightEight->setStyleSheet("background-color: red");
        case 7:
            ui->lightSeven->setStyleSheet("background-color: red");
        case 6:
            ui->lightSix->setStyleSheet("background-color: yellow");
        case 5:
            ui->lightFive->setStyleSheet("background-color: yellow");
        case 4:
            ui->lightFour->setStyleSheet("background-color: yellow");
        case 3:
            ui->lightThree->setStyleSheet("background-color: green");
            ui->lightTwo->setStyleSheet("background-color: green");
            ui->lightOne->setStyleSheet("background-color: green");
            break;
        case 2:
            for(int i=0; i<2; i++){
                ui->lightTwo->setStyleSheet("background-color: green");
                ui->lightOne->setStyleSheet("background-color: green");
                delay(1);
                ui->lightTwo->setStyleSheet("background-color: white");
                ui->lightOne->setStyleSheet("background-color: white");
                delay(1);
            }
            return;
        case 1:
            for(int i=0; i<2; i++){
                ui->lightOne->setStyleSheet("background-color: green");
                delay(1);
                ui->lightOne->setStyleSheet("background-color: white");
                delay(1);
            }
            return;
    }
    delay(1);

    ui->lightEight->setStyleSheet("background-color: white");
    ui->lightSeven->setStyleSheet("background-color: white");
    ui->lightSix->setStyleSheet("background-color: white");
    ui->lightFive->setStyleSheet("background-color: white");
    ui->lightFour->setStyleSheet("background-color: white");
    ui->lightThree->setStyleSheet("background-color: white");
    ui->lightTwo->setStyleSheet("background-color: white");
    ui->lightOne->setStyleSheet("background-color: white");
}

void MainWindow::on_sessionButton_clicked()
{
    if (!checkAll()){
        return;
    }

    switch(sessionSelection){
        case 0:
            sessionSelection =1;
            ui->metRBtn->setChecked(true);
            break;
        case 1:
            sessionSelection =2;
            ui->deltaRBtn->setChecked(true);
            ui->metRBtn->setChecked(false);
            break;
        case 2:
            sessionSelection =3;
            ui->deltaRBtn->setChecked(false);
            ui->thetaRBtn->setChecked(true);
            break;
        case 3:
            sessionSelection =4;
            ui->alphaRBtn->setChecked(true);
            ui->thetaRBtn->setChecked(false);
            break;
        case 4:
            sessionSelection =1;
            ui->alphaRBtn->setChecked(false);
            ui->metRBtn->setChecked(true);
            break;
    }
    timer->start();
}

void MainWindow::on_timeButton_clicked()
{
    if (!checkAll()){
        return;
    }

    switch(timeSelection){
        case 0:
            timeSelection =1;
            ui->twenty->setChecked(true);
            break;
        case 1:
            timeSelection =2;
            ui->fortyFive->setChecked(true);
            ui->twenty->setChecked(false);
            break;
        case 2:
            timeSelection =1;
            ui->fortyFive->setChecked(false);
            ui->twenty->setChecked(true);
            break;
    }
    timer->start();
}

void MainWindow::on_checkBtn_clicked()
{
    if (!checkAll()){
        return;
    }

    if (timeSelection == 0 || sessionSelection == 0 || userSelection == 0){
        QTextStream(stdout) << "Please select time and session type" << endl;
        return;
    }

    int duration;
    if (timeSelection == 1){
        duration = 20;
    }else{
        duration=45;
    }
    sessionTimer = duration * 60;

    QTimer* therapyTimer = new QTimer(this);
    therapyTimer->setInterval(1000);
    connect(therapyTimer, &QTimer::timeout, this, &MainWindow::updateCountdown);
    therapyTimer->start();

}

void MainWindow::updateCountdown(){
    if(sessionTimer < 0 ){
        drainBattery();
        return;
    }

    if(sessionTimer == 0 && ui->recordRBtn->isChecked()){
        saveTherapy();
        timer->start();
    }

    int minutes = sessionTimer / 60;
    int seconds = (sessionTimer % 60);

    QString m = (QString::number(minutes)).length() < 2 ? QString("0%1").arg(QString::number(minutes)) : QString::number(minutes);
    QString s = (QString::number(seconds)).length() < 2 ? QString("0%1").arg(QString::number(seconds)) : QString::number(seconds);

    QString time = QString("%1 : %4").arg(m).arg(s);
    ui->sessionTimerLbl->setText(time);

    if(sessionTimer%40==0){
        drainBattery();
    }
    sessionTimer--;

}

void MainWindow::drainBattery(){
    if(!power){return;}
    int currLevel = bat.getLevel();
    int usage = 2;
    if (sessionTimer > 0){
         usage += intensity + sessionSelection;
    }

    int newLevel = currLevel - usage;
    bat.setLevel(newLevel);
}

void MainWindow::saveTherapy(){

    int duration;
    if (timeSelection == 1){
        duration = 20;
    }else{
        duration=45;
    }

    QString sessiontype;
    if (sessionSelection == 1){
        sessiontype = "Met";
    }else if(sessionSelection == 2){
        sessiontype ="Delta";
    }else if(sessionSelection == 3){
        sessiontype = "Theta";
    }else{
        sessiontype = "Alpha";
    }

    Session* newSession = new Session (duration, intensity, sessiontype);
    QString selected;
    if (userSelection == 1){
        selected = "User1";
    }else if (userSelection == 2){
        selected = "User2";
    }else{
        selected = "User3";
    }

    allRecords[numRecs] = new Record(newSession, selected);

    numRecs++;

    updateTherapy();


}


bool MainWindow::checkAll(){
    //check to see if the power is on (by checking the timer object
    timer->stop();
    return power;
}

void MainWindow::toggleIntensity(bool choice){
    if(!checkAll()){return;}

    int batTimerLeft = batTimer->remainingTime();
    batTimer->stop();

    if(choice){
        if(intensity < 8){
            intensity++;
        }
    }else{
        if(intensity > 1){
            intensity--;
        }
    }

    switch(intensity){
        case 8:
            ui->lightEight->setStyleSheet("background-color: red");
        case 7:
            ui->lightSeven->setStyleSheet("background-color: red");
        case 6:
            ui->lightSix->setStyleSheet("background-color: yellow");
        case 5:
            ui->lightFive->setStyleSheet("background-color: yellow");
        case 4:
            ui->lightFour->setStyleSheet("background-color: yellow");
        case 3:
            ui->lightThree->setStyleSheet("background-color: green");
        case 2:
            ui->lightTwo->setStyleSheet("background-color: green");
        case 1:
            ui->lightOne->setStyleSheet("background-color: green");
    }
    delay(1);

    ui->lightEight->setStyleSheet("background-color: white");
    ui->lightSeven->setStyleSheet("background-color: white");
    ui->lightSix->setStyleSheet("background-color: white");
    ui->lightFive->setStyleSheet("background-color: white");
    ui->lightFour->setStyleSheet("background-color: white");
    ui->lightThree->setStyleSheet("background-color: white");
    ui->lightTwo->setStyleSheet("background-color: white");
    ui->lightOne->setStyleSheet("background-color: white");

    batTimer->start(batTimerLeft);
}

void MainWindow::on_userButton_clicked()
{
    if (!checkAll()){
        return;
    }

    switch(userSelection){
        case 0:
            userSelection =1;
            ui->userOne->setChecked(true);
            break;
        case 1:
            userSelection =2;
            ui->userTwo->setChecked(true);
            ui->userOne->setChecked(false);
            break;
        case 2:
            userSelection =3;
            ui->userThree->setChecked(true);
            ui->userTwo->setChecked(false);
            break;
        case 3:
            userSelection =1;
            ui->userOne->setChecked(true);
            ui->userThree->setChecked(false);
            break;
    }
    updateTherapy();
    timer->start();
}

void MainWindow::updateTherapy(){
    if (numRecs == 0){return;}
    ui->recordsList->clear();

    QString selected;
    if (userSelection == 1){
        selected = "User1";
    }else if (userSelection == 2){
        selected = "User2";
    }else{
        selected = "User3";
    }

    for (int i = 0; i < numRecs; i++) {
        QString currRec = QString("%1 -- %2").arg(i).arg(allRecords[i]->format());
        if (selected == allRecords[i]->getUser()){
            QListWidgetItem *newItem = new QListWidgetItem;
            newItem->setText(currRec);
            ui->recordsList->insertItem(0,newItem);
        }

    }


}

void MainWindow::on_replay_clicked()
{
    if(!ui->recordsList->currentItem()){return;}
    int index = ui->recordsList->currentItem()->text().at(0).digitValue();
    Record* currRec = allRecords[index];
    //use getters to get information about the record and call the
    sessionTimer = 30;
    return;
}
