/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *StartGameButton;
    QPushButton *MainMenuSettingButton;
    QPushButton *MainMenuQuitButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1024, 768);
        MainWindow->setMouseTracking(false);
        MainWindow->setFocusPolicy(Qt::ClickFocus);
        MainWindow->setStyleSheet(QString::fromUtf8("background-image: url(:/images/resources/mainback.png);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        StartGameButton = new QPushButton(centralwidget);
        StartGameButton->setObjectName("StartGameButton");
        StartGameButton->setGeometry(QRect(100, 320, 121, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe Print")});
        font.setPointSize(16);
        font.setBold(false);
        font.setItalic(false);
        StartGameButton->setFont(font);
        StartGameButton->setAutoFillBackground(false);
        StartGameButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-image: url(:/images/resources/blankBack.png);\n"
"color: rgb(255, 0, 4);\n"
"font: 16pt \"Segoe Print\";\n"
"}\n"
"QPushButton::hover{\n"
"	color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 0, 0, 255), stop:0.166 rgba(255, 255, 0, 255), stop:0.333 rgba(0, 255, 0, 255), stop:0.5 rgba(0, 255, 255, 255), stop:0.666 rgba(0, 0, 255, 255), stop:0.833 rgba(255, 0, 255, 255), stop:1 rgba(255, 0, 0, 255));\n"
"}"));
        StartGameButton->setCheckable(false);
        StartGameButton->setAutoDefault(false);
        StartGameButton->setFlat(true);
        MainMenuSettingButton = new QPushButton(centralwidget);
        MainMenuSettingButton->setObjectName("MainMenuSettingButton");
        MainMenuSettingButton->setGeometry(QRect(100, 370, 121, 51));
        MainMenuSettingButton->setAutoFillBackground(false);
        MainMenuSettingButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-image: url(:/images/resources/blankBack.png);\n"
"color: rgb(255, 0, 4);\n"
"font: 16pt \"Segoe Print\";\n"
"}\n"
"QPushButton::hover{\n"
"	color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 0, 0, 255), stop:0.166 rgba(255, 255, 0, 255), stop:0.333 rgba(0, 255, 0, 255), stop:0.5 rgba(0, 255, 255, 255), stop:0.666 rgba(0, 0, 255, 255), stop:0.833 rgba(255, 0, 255, 255), stop:1 rgba(255, 0, 0, 255));\n"
"}"));
        MainMenuSettingButton->setFlat(true);
        MainMenuQuitButton = new QPushButton(centralwidget);
        MainMenuQuitButton->setObjectName("MainMenuQuitButton");
        MainMenuQuitButton->setGeometry(QRect(100, 420, 121, 51));
        MainMenuQuitButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-image: url(:/images/resources/blankBack.png);\n"
"color: rgb(255, 0, 4);\n"
"font: 16pt \"Segoe Print\";\n"
"}\n"
"QPushButton::hover{\n"
"	color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 0, 0, 255), stop:0.166 rgba(255, 255, 0, 255), stop:0.333 rgba(0, 255, 0, 255), stop:0.5 rgba(0, 255, 255, 255), stop:0.666 rgba(0, 0, 255, 255), stop:0.833 rgba(255, 0, 255, 255), stop:1 rgba(255, 0, 0, 255));\n"
"}"));
        MainMenuQuitButton->setFlat(true);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        StartGameButton->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        StartGameButton->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        MainMenuSettingButton->setText(QCoreApplication::translate("MainWindow", "Settings", nullptr));
        MainMenuQuitButton->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
