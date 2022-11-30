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
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QTextBrowser *textBrowser;
    QCheckBox *checkBox;
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
    QPushButton *nextBtn;
    QPushButton *checkBtn;
    QLabel *powerLabel;
    QPushButton *pushButton;
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
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(1310, 100, 321, 261));
        checkBox = new QCheckBox(centralwidget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(710, 320, 82, 23));
        checkBox->setAutoFillBackground(true);
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
        nextBtn = new QPushButton(centralwidget);
        nextBtn->setObjectName(QString::fromUtf8("nextBtn"));
        nextBtn->setGeometry(QRect(220, 260, 101, 51));
        nextBtn->setStyleSheet(QString::fromUtf8("border-image: url(:/Images/Images/nextButton.png);"));
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
        textBrowser->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Noto Sans'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" text-decoration: underline;\">Saved Replays</span></p></body></html>", nullptr));
        checkBox->setText(QApplication::translate("MainWindow", "Record", nullptr));
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
        nextBtn->setText(QString());
        checkBtn->setText(QString());
        powerLabel->setText(QString());
        pushButton->setText(QApplication::translate("MainWindow", "Recharge Battery", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
