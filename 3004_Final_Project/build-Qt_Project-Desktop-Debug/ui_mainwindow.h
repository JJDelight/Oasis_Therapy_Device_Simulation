/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QCheckBox *recordRBtn;
    QPushButton *lightOne;
    QPushButton *lightTwo;
    QPushButton *lightThree;
    QPushButton *lightFour;
    QPushButton *lightFive;
    QPushButton *lightSix;
    QPushButton *lightSeven;
    QPushButton *lightEight;
    QPushButton *powerButton;
    QPushButton *increaseBtn;
    QPushButton *decreaseBtn;
    QPushButton *sessionButton;
    QPushButton *checkBtn;
    QLabel *powerLabel;
    QPushButton *pushButton;
    QPushButton *timeButton;
    QCheckBox *earsRBtn;
    QGroupBox *groupBox;
    QCheckBox *twenty;
    QCheckBox *fortyFive;
    QTextEdit *customTime;
    QGroupBox *groupBox_2;
    QCheckBox *metRBtn;
    QCheckBox *deltaRBtn;
    QCheckBox *thetaRBtn;
    QCheckBox *alphaRBtn;
    QListWidget *recordsList;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1701, 851);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, -130, 1101, 1001));
        label->setPixmap(QPixmap(QString::fromUtf8(":/Images/Images/Oasis Device.png")));
        label->setScaledContents(true);
        recordRBtn = new QCheckBox(centralwidget);
        recordRBtn->setObjectName(QString::fromUtf8("recordRBtn"));
        recordRBtn->setGeometry(QRect(710, 320, 82, 23));
        recordRBtn->setAutoFillBackground(true);
        lightOne = new QPushButton(centralwidget);
        lightOne->setObjectName(QString::fromUtf8("lightOne"));
        lightOne->setGeometry(QRect(450, 550, 61, 25));
        lightTwo = new QPushButton(centralwidget);
        lightTwo->setObjectName(QString::fromUtf8("lightTwo"));
        lightTwo->setGeometry(QRect(450, 520, 61, 25));
        lightThree = new QPushButton(centralwidget);
        lightThree->setObjectName(QString::fromUtf8("lightThree"));
        lightThree->setGeometry(QRect(450, 490, 61, 25));
        lightFour = new QPushButton(centralwidget);
        lightFour->setObjectName(QString::fromUtf8("lightFour"));
        lightFour->setGeometry(QRect(450, 460, 61, 25));
        lightFive = new QPushButton(centralwidget);
        lightFive->setObjectName(QString::fromUtf8("lightFive"));
        lightFive->setGeometry(QRect(450, 430, 61, 25));
        lightSix = new QPushButton(centralwidget);
        lightSix->setObjectName(QString::fromUtf8("lightSix"));
        lightSix->setGeometry(QRect(450, 400, 61, 25));
        lightSeven = new QPushButton(centralwidget);
        lightSeven->setObjectName(QString::fromUtf8("lightSeven"));
        lightSeven->setGeometry(QRect(450, 370, 61, 25));
        lightEight = new QPushButton(centralwidget);
        lightEight->setObjectName(QString::fromUtf8("lightEight"));
        lightEight->setGeometry(QRect(450, 340, 61, 25));
        powerButton = new QPushButton(centralwidget);
        powerButton->setObjectName(QString::fromUtf8("powerButton"));
        powerButton->setGeometry(QRect(820, 510, 101, 71));
        powerButton->setAutoFillBackground(false);
        powerButton->setStyleSheet(QString::fromUtf8("border-image: url(:/Images/Images/powerButton.png);"));
        powerButton->setFlat(false);
        increaseBtn = new QPushButton(centralwidget);
        increaseBtn->setObjectName(QString::fromUtf8("increaseBtn"));
        increaseBtn->setGeometry(QRect(690, 410, 80, 71));
        increaseBtn->setAutoFillBackground(false);
        increaseBtn->setStyleSheet(QString::fromUtf8("border-image: url(:/Images/Images/UpArrow.png);"));
        decreaseBtn = new QPushButton(centralwidget);
        decreaseBtn->setObjectName(QString::fromUtf8("decreaseBtn"));
        decreaseBtn->setGeometry(QRect(690, 510, 81, 71));
        decreaseBtn->setAutoFillBackground(false);
        decreaseBtn->setStyleSheet(QString::fromUtf8("border-image: url(:/Images/Images/DownArrow.png);"));
        sessionButton = new QPushButton(centralwidget);
        sessionButton->setObjectName(QString::fromUtf8("sessionButton"));
        sessionButton->setGeometry(QRect(220, 260, 101, 51));
        sessionButton->setStyleSheet(QString::fromUtf8("border-image: url(:/Images/Images/nextButton.png);"));
        checkBtn = new QPushButton(centralwidget);
        checkBtn->setObjectName(QString::fromUtf8("checkBtn"));
        checkBtn->setGeometry(QRect(300, 520, 80, 61));
        checkBtn->setStyleSheet(QString::fromUtf8("border-image: url(:/Images/Images/checkmark.png);"));
        powerLabel = new QLabel(centralwidget);
        powerLabel->setObjectName(QString::fromUtf8("powerLabel"));
        powerLabel->setGeometry(QRect(840, 490, 54, 17));
        powerLabel->setAutoFillBackground(true);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(1390, 490, 111, 71));
        timeButton = new QPushButton(centralwidget);
        timeButton->setObjectName(QString::fromUtf8("timeButton"));
        timeButton->setGeometry(QRect(220, 170, 101, 51));
        timeButton->setStyleSheet(QString::fromUtf8("border-image: url(:/Images/Images/nextButton.png);"));
        earsRBtn = new QCheckBox(centralwidget);
        earsRBtn->setObjectName(QString::fromUtf8("earsRBtn"));
        earsRBtn->setGeometry(QRect(890, 180, 82, 23));
        earsRBtn->setAutoFillBackground(true);
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(340, 150, 411, 61));
        groupBox->setFlat(false);
        twenty = new QCheckBox(groupBox);
        twenty->setObjectName(QString::fromUtf8("twenty"));
        twenty->setGeometry(QRect(20, 40, 82, 23));
        twenty->setAutoFillBackground(true);
        twenty->setCheckable(true);
        twenty->setAutoExclusive(true);
        fortyFive = new QCheckBox(groupBox);
        fortyFive->setObjectName(QString::fromUtf8("fortyFive"));
        fortyFive->setGeometry(QRect(100, 40, 82, 23));
        fortyFive->setAutoFillBackground(true);
        fortyFive->setCheckable(true);
        fortyFive->setAutoExclusive(true);
        customTime = new QTextEdit(groupBox);
        customTime->setObjectName(QString::fromUtf8("customTime"));
        customTime->setGeometry(QRect(180, 30, 71, 31));
        customTime->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(350, 250, 211, 61));
        metRBtn = new QCheckBox(groupBox_2);
        metRBtn->setObjectName(QString::fromUtf8("metRBtn"));
        metRBtn->setGeometry(QRect(0, 30, 61, 23));
        metRBtn->setAutoFillBackground(true);
        metRBtn->setCheckable(true);
        metRBtn->setAutoExclusive(true);
        deltaRBtn = new QCheckBox(groupBox_2);
        deltaRBtn->setObjectName(QString::fromUtf8("deltaRBtn"));
        deltaRBtn->setGeometry(QRect(50, 30, 82, 23));
        deltaRBtn->setAutoFillBackground(true);
        deltaRBtn->setCheckable(true);
        deltaRBtn->setAutoExclusive(true);
        thetaRBtn = new QCheckBox(groupBox_2);
        thetaRBtn->setObjectName(QString::fromUtf8("thetaRBtn"));
        thetaRBtn->setGeometry(QRect(100, 30, 82, 23));
        thetaRBtn->setAutoFillBackground(true);
        thetaRBtn->setCheckable(true);
        thetaRBtn->setAutoExclusive(true);
        alphaRBtn = new QCheckBox(groupBox_2);
        alphaRBtn->setObjectName(QString::fromUtf8("alphaRBtn"));
        alphaRBtn->setGeometry(QRect(150, 30, 82, 23));
        alphaRBtn->setAutoFillBackground(true);
        alphaRBtn->setCheckable(true);
        alphaRBtn->setAutoExclusive(true);
        recordsList = new QListWidget(centralwidget);
        recordsList->setObjectName(QString::fromUtf8("recordsList"));
        recordsList->setGeometry(QRect(1310, 110, 256, 192));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(1310, 90, 201, 17));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1701, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QString());
        recordRBtn->setText(QApplication::translate("MainWindow", "Record", nullptr));
        lightOne->setText(QApplication::translate("MainWindow", "1", nullptr));
        lightTwo->setText(QApplication::translate("MainWindow", "2", nullptr));
        lightThree->setText(QApplication::translate("MainWindow", "3", nullptr));
        lightFour->setText(QApplication::translate("MainWindow", "4", nullptr));
        lightFive->setText(QApplication::translate("MainWindow", "5", nullptr));
        lightSix->setText(QApplication::translate("MainWindow", "6", nullptr));
        lightSeven->setText(QApplication::translate("MainWindow", "7", nullptr));
        lightEight->setText(QApplication::translate("MainWindow", "8", nullptr));
        powerButton->setText(QString());
        increaseBtn->setText(QString());
        decreaseBtn->setText(QString());
        sessionButton->setText(QString());
        checkBtn->setText(QString());
        powerLabel->setText(QString());
        pushButton->setText(QApplication::translate("MainWindow", "Recharge Battery", nullptr));
        timeButton->setText(QString());
        earsRBtn->setText(QApplication::translate("MainWindow", "On Ears", nullptr));
        groupBox->setTitle(QString());
        twenty->setText(QApplication::translate("MainWindow", "20min", nullptr));
        fortyFive->setText(QApplication::translate("MainWindow", "45min", nullptr));
        customTime->setPlaceholderText(QApplication::translate("MainWindow", "0", nullptr));
        groupBox_2->setTitle(QString());
        metRBtn->setText(QApplication::translate("MainWindow", "Met", nullptr));
        deltaRBtn->setText(QApplication::translate("MainWindow", "Delta", nullptr));
        thetaRBtn->setText(QApplication::translate("MainWindow", "theta", nullptr));
        alphaRBtn->setText(QApplication::translate("MainWindow", "Alpha", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Saved Replays", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
