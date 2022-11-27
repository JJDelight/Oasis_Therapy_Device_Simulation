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
#include <QtWidgets/QProgressBar>
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
    QProgressBar *progressBar;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *lightOne;
    QPushButton *lightTwo;
    QPushButton *lightThree;
    QPushButton *lightFour;
    QPushButton *lightFive;
    QPushButton *lightSix;
    QPushButton *lightSeven;
    QPushButton *lightEight;
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
        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(1420, 460, 131, 23));
        progressBar->setLayoutDirection(Qt::LeftToRight);
        progressBar->setValue(24);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(690, 420, 81, 71));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/Images/Images/UpArrow.png")));
        label_2->setScaledContents(true);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(690, 520, 81, 71));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/Images/Images/DownArrow.png")));
        label_3->setScaledContents(true);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(300, 530, 81, 61));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/Images/Images/checkmark.png")));
        label_4->setScaledContents(true);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(830, 490, 91, 91));
        label_5->setAutoFillBackground(false);
        label_5->setStyleSheet(QString::fromUtf8("di"));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/Images/Images/powerButton.png")));
        label_5->setScaledContents(true);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(220, 260, 121, 71));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/Images/Images/nextButton.png")));
        label_6->setScaledContents(true);
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
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        label_5->setText(QString());
        label_6->setText(QString());
        lightOne->setText(QApplication::translate("MainWindow", "1", nullptr));
        lightTwo->setText(QApplication::translate("MainWindow", "2", nullptr));
        lightThree->setText(QApplication::translate("MainWindow", "3", nullptr));
        lightFour->setText(QApplication::translate("MainWindow", "4", nullptr));
        lightFive->setText(QApplication::translate("MainWindow", "5", nullptr));
        lightSix->setText(QApplication::translate("MainWindow", "6", nullptr));
        lightSeven->setText(QApplication::translate("MainWindow", "7", nullptr));
        lightEight->setText(QApplication::translate("MainWindow", "8", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
