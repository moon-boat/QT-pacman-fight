/********************************************************************************
** Form generated from reading UI file 'settingpage.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGPAGE_H
#define UI_SETTINGPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingPage
{
public:
    QPushButton *ReturnParentInSetting;
    QPushButton *QuitButtonInSetting;
    QSlider *timeLimitSlider;
    QLabel *TimeLimitSetting;
    QLabel *TimeLimitLabel;
    QSlider *PacmanLPSlider;
    QLabel *PacmanLPSetting;
    QLabel *PacmanLPLabel;
    QLabel *PacmanWalkSetting;
    QSlider *PacmanWalkSlider;
    QLabel *ShootLImit;
    QLabel *PacmanWalkLabel;
    QLabel *BeanNum;
    QSlider *BeanNumSlider;
    QLabel *BeanNumLabel;
    QLabel *PacmanRotation;
    QSlider *PacmanRotationSlider;
    QLabel *PacmanRotationLabel;
    QLabel *BeanRate;
    QSlider *BeanRateSlider;
    QLabel *BeanRateLabel;
    QLabel *PacmanAttack;
    QSlider *PacmanAttackSlider;
    QLabel *PacmanAttackLabel;
    QSlider *ShootLimitSlider;
    QLabel *ShootLimitLabel;
    QLabel *Update;
    QSlider *UpdateSlider;
    QLabel *UpdateLabel;

    void setupUi(QWidget *SettingPage)
    {
        if (SettingPage->objectName().isEmpty())
            SettingPage->setObjectName("SettingPage");
        SettingPage->setWindowModality(Qt::WindowModal);
        SettingPage->resize(1024, 768);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 0));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        SettingPage->setPalette(palette);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/resources/mainback.png"), QSize(), QIcon::Normal, QIcon::Off);
        SettingPage->setWindowIcon(icon);
        SettingPage->setAutoFillBackground(false);
        SettingPage->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"	height: 5px;\n"
"	background: #e67e22;\n"
"}\n"
"QSlider::groove:vertical {\n"
"	width: 5px;\n"
"	background: #e67e22;\n"
"}\n"
"QSlider::handle:horizontal {\n"
"	background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #b4b4b4, stop:1 #8f8f8f);\n"
"	border: 1px solid #5c5c5c;\n"
"	width: 14px;\n"
"	margin: -5px 0;\n"
"	border-radius: 7px;\n"
"}\n"
"QSlider::handle:vertical {\n"
"	background: qlineargradient(x1:1, y1:1, x2:0, y2:0, stop:0 #b4b4b4, stop:1 #8f8f8f);\n"
"	border: 1px solid #5c5c5c;\n"
"	height: 14px;\n"
"	margin: 0 -5px;\n"
"	border-radius: 7px;\n"
"}\n"
"QSlider::add-page:horizontal {\n"
"    background: white;\n"
"}\n"
"QSlider::add-page:vertical {\n"
"    background: white;\n"
"}\n"
"QSlider::sub-page:horizontal {\n"
"    background: #e67e22;\n"
"}\n"
"QSlider::sub-page:vertical {\n"
"    background: #e67e22;\n"
"}"));
        ReturnParentInSetting = new QPushButton(SettingPage);
        ReturnParentInSetting->setObjectName("ReturnParentInSetting");
        ReturnParentInSetting->setGeometry(QRect(550, 600, 92, 29));
        QPalette palette1;
        QBrush brush1(QColor(255, 0, 4, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush1);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush1);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush1);
#endif
        ReturnParentInSetting->setPalette(palette1);
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe Print")});
        font.setPointSize(16);
        font.setBold(false);
        font.setItalic(false);
        ReturnParentInSetting->setFont(font);
        ReturnParentInSetting->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-image: url(:/images/resources/blankBack.png);\n"
"color: rgb(255, 0, 4);\n"
"font: 16pt \"Segoe Print\";\n"
"}\n"
"QPushButton::hover{\n"
"	color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 0, 0, 255), stop:0.166 rgba(255, 255, 0, 255), stop:0.333 rgba(0, 255, 0, 255), stop:0.5 rgba(0, 255, 255, 255), stop:0.666 rgba(0, 0, 255, 255), stop:0.833 rgba(255, 0, 255, 255), stop:1 rgba(255, 0, 0, 255));\n"
"}"));
        ReturnParentInSetting->setFlat(true);
        QuitButtonInSetting = new QPushButton(SettingPage);
        QuitButtonInSetting->setObjectName("QuitButtonInSetting");
        QuitButtonInSetting->setGeometry(QRect(330, 600, 92, 29));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush1);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush1);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush1);
#endif
        QuitButtonInSetting->setPalette(palette2);
        QuitButtonInSetting->setFont(font);
        QuitButtonInSetting->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-image: url(:/images/resources/blankBack.png);\n"
"color: rgb(255, 0, 4);\n"
"font: 16pt \"Segoe Print\";\n"
"}\n"
"QPushButton::hover{\n"
"	color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 0, 0, 255), stop:0.166 rgba(255, 255, 0, 255), stop:0.333 rgba(0, 255, 0, 255), stop:0.5 rgba(0, 255, 255, 255), stop:0.666 rgba(0, 0, 255, 255), stop:0.833 rgba(255, 0, 255, 255), stop:1 rgba(255, 0, 0, 255));\n"
"}"));
        QuitButtonInSetting->setFlat(true);
        timeLimitSlider = new QSlider(SettingPage);
        timeLimitSlider->setObjectName("timeLimitSlider");
        timeLimitSlider->setGeometry(QRect(230, 240, 160, 21));
        timeLimitSlider->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"	height: 5px;\n"
"	background: #e67e22;\n"
"}\n"
"QSlider::groove:vertical {\n"
"	width: 5px;\n"
"	background: #e67e22;\n"
"}\n"
"QSlider::handle:horizontal {\n"
"	background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #b4b4b4, stop:1 #8f8f8f);\n"
"	border: 1px solid #5c5c5c;\n"
"	width: 14px;\n"
"	margin: -5px 0;\n"
"	border-radius: 7px;\n"
"}\n"
"QSlider::handle:vertical {\n"
"	background: qlineargradient(x1:1, y1:1, x2:0, y2:0, stop:0 #b4b4b4, stop:1 #8f8f8f);\n"
"	border: 1px solid #5c5c5c;\n"
"	height: 14px;\n"
"	margin: 0 -5px;\n"
"	border-radius: 7px;\n"
"}\n"
"QSlider::add-page:horizontal {\n"
"    background: white;\n"
"}\n"
"QSlider::add-page:vertical {\n"
"    background: white;\n"
"}\n"
"QSlider::sub-page:horizontal {\n"
"    background: #e67e22;\n"
"}\n"
"QSlider::sub-page:vertical {\n"
"    background: #e67e22;\n"
"}"));
        timeLimitSlider->setMaximum(300);
        timeLimitSlider->setValue(0);
        timeLimitSlider->setOrientation(Qt::Horizontal);
        timeLimitSlider->setTickPosition(QSlider::TicksBothSides);
        timeLimitSlider->setTickInterval(10);
        TimeLimitSetting = new QLabel(SettingPage);
        TimeLimitSetting->setObjectName("TimeLimitSetting");
        TimeLimitSetting->setGeometry(QRect(150, 240, 71, 21));
        TimeLimitSetting->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-image: url(:/images/resources/blankBack.png);\n"
"color: rgb(255, 255, 0);\n"
"font: 700 12pt \"Segoe Print\";\n"
"}"));
        TimeLimitLabel = new QLabel(SettingPage);
        TimeLimitLabel->setObjectName("TimeLimitLabel");
        TimeLimitLabel->setGeometry(QRect(400, 240, 54, 21));
        TimeLimitLabel->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-image: url(:/images/resources/blankBack.png);\n"
"color: rgb(255, 255, 0);\n"
"font: 700 italic 12pt \"Monotype Corsiva\";\n"
"}"));
        PacmanLPSlider = new QSlider(SettingPage);
        PacmanLPSlider->setObjectName("PacmanLPSlider");
        PacmanLPSlider->setGeometry(QRect(415, 480, 160, 16));
        PacmanLPSlider->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"	height: 5px;\n"
"	background: #e67e22;\n"
"}\n"
"QSlider::groove:vertical {\n"
"	width: 5px;\n"
"	background: #e67e22;\n"
"}\n"
"QSlider::handle:horizontal {\n"
"	background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #b4b4b4, stop:1 #8f8f8f);\n"
"	border: 1px solid #5c5c5c;\n"
"	width: 14px;\n"
"	margin: -5px 0;\n"
"	border-radius: 7px;\n"
"}\n"
"QSlider::handle:vertical {\n"
"	background: qlineargradient(x1:1, y1:1, x2:0, y2:0, stop:0 #b4b4b4, stop:1 #8f8f8f);\n"
"	border: 1px solid #5c5c5c;\n"
"	height: 14px;\n"
"	margin: 0 -5px;\n"
"	border-radius: 7px;\n"
"}\n"
"QSlider::add-page:horizontal {\n"
"    background: white;\n"
"}\n"
"QSlider::add-page:vertical {\n"
"    background: white;\n"
"}\n"
"QSlider::sub-page:horizontal {\n"
"    background: #e67e22;\n"
"}\n"
"QSlider::sub-page:vertical {\n"
"    background: #e67e22;\n"
"}"));
        PacmanLPSlider->setMinimum(1);
        PacmanLPSlider->setOrientation(Qt::Horizontal);
        PacmanLPSlider->setTickPosition(QSlider::TicksBothSides);
        PacmanLPSetting = new QLabel(SettingPage);
        PacmanLPSetting->setObjectName("PacmanLPSetting");
        PacmanLPSetting->setGeometry(QRect(335, 480, 71, 21));
        PacmanLPSetting->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-image: url(:/images/resources/blankBack.png);\n"
"color: rgb(255, 255, 0);\n"
"font: 700 12pt \"Segoe Print\";\n"
"}"));
        PacmanLPLabel = new QLabel(SettingPage);
        PacmanLPLabel->setObjectName("PacmanLPLabel");
        PacmanLPLabel->setGeometry(QRect(585, 480, 54, 21));
        PacmanLPLabel->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-image: url(:/images/resources/blankBack.png);\n"
"color: rgb(255, 255, 0);\n"
"font: 700 italic 12pt \"Monotype Corsiva\";\n"
"}"));
        PacmanWalkSetting = new QLabel(SettingPage);
        PacmanWalkSetting->setObjectName("PacmanWalkSetting");
        PacmanWalkSetting->setGeometry(QRect(150, 300, 71, 21));
        PacmanWalkSetting->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-image: url(:/images/resources/blankBack.png);\n"
"color: rgb(255, 255, 0);\n"
"font: 700 12pt \"Segoe Print\";\n"
"}"));
        PacmanWalkSlider = new QSlider(SettingPage);
        PacmanWalkSlider->setObjectName("PacmanWalkSlider");
        PacmanWalkSlider->setGeometry(QRect(230, 300, 160, 16));
        PacmanWalkSlider->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"	height: 5px;\n"
"	background: #e67e22;\n"
"}\n"
"QSlider::groove:vertical {\n"
"	width: 5px;\n"
"	background: #e67e22;\n"
"}\n"
"QSlider::handle:horizontal {\n"
"	background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #b4b4b4, stop:1 #8f8f8f);\n"
"	border: 1px solid #5c5c5c;\n"
"	width: 14px;\n"
"	margin: -5px 0;\n"
"	border-radius: 7px;\n"
"}\n"
"QSlider::handle:vertical {\n"
"	background: qlineargradient(x1:1, y1:1, x2:0, y2:0, stop:0 #b4b4b4, stop:1 #8f8f8f);\n"
"	border: 1px solid #5c5c5c;\n"
"	height: 14px;\n"
"	margin: 0 -5px;\n"
"	border-radius: 7px;\n"
"}\n"
"QSlider::add-page:horizontal {\n"
"    background: white;\n"
"}\n"
"QSlider::add-page:vertical {\n"
"    background: white;\n"
"}\n"
"QSlider::sub-page:horizontal {\n"
"    background: #e67e22;\n"
"}\n"
"QSlider::sub-page:vertical {\n"
"    background: #e67e22;\n"
"}"));
        PacmanWalkSlider->setMinimum(1);
        PacmanWalkSlider->setMaximum(100);
        PacmanWalkSlider->setValue(1);
        PacmanWalkSlider->setSliderPosition(1);
        PacmanWalkSlider->setOrientation(Qt::Horizontal);
        ShootLImit = new QLabel(SettingPage);
        ShootLImit->setObjectName("ShootLImit");
        ShootLImit->setGeometry(QRect(520, 300, 71, 21));
        ShootLImit->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-image: url(:/images/resources/blankBack.png);\n"
"color: rgb(255, 255, 0);\n"
"font: 700 12pt \"Segoe Print\";\n"
"}"));
        PacmanWalkLabel = new QLabel(SettingPage);
        PacmanWalkLabel->setObjectName("PacmanWalkLabel");
        PacmanWalkLabel->setGeometry(QRect(400, 300, 54, 21));
        PacmanWalkLabel->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-image: url(:/images/resources/blankBack.png);\n"
"color: rgb(255, 255, 0);\n"
"font: 700 italic 12pt \"Monotype Corsiva\";\n"
"}"));
        BeanNum = new QLabel(SettingPage);
        BeanNum->setObjectName("BeanNum");
        BeanNum->setGeometry(QRect(150, 360, 71, 21));
        BeanNum->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-image: url(:/images/resources/blankBack.png);\n"
"color: rgb(255, 255, 0);\n"
"font: 700 12pt \"Segoe Print\";\n"
"}"));
        BeanNumSlider = new QSlider(SettingPage);
        BeanNumSlider->setObjectName("BeanNumSlider");
        BeanNumSlider->setGeometry(QRect(230, 360, 160, 16));
        BeanNumSlider->setOrientation(Qt::Horizontal);
        BeanNumLabel = new QLabel(SettingPage);
        BeanNumLabel->setObjectName("BeanNumLabel");
        BeanNumLabel->setGeometry(QRect(400, 360, 54, 21));
        BeanNumLabel->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-image: url(:/images/resources/blankBack.png);\n"
"color: rgb(255, 255, 0);\n"
"font: 700 italic 12pt \"Monotype Corsiva\";\n"
"}"));
        PacmanRotation = new QLabel(SettingPage);
        PacmanRotation->setObjectName("PacmanRotation");
        PacmanRotation->setGeometry(QRect(150, 420, 71, 21));
        PacmanRotation->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-image: url(:/images/resources/blankBack.png);\n"
"color: rgb(255, 255, 0);\n"
"font: 700 12pt \"Segoe Print\";\n"
"}"));
        PacmanRotationSlider = new QSlider(SettingPage);
        PacmanRotationSlider->setObjectName("PacmanRotationSlider");
        PacmanRotationSlider->setGeometry(QRect(230, 420, 160, 16));
        PacmanRotationSlider->setMinimum(1);
        PacmanRotationSlider->setMaximum(150);
        PacmanRotationSlider->setValue(1);
        PacmanRotationSlider->setOrientation(Qt::Horizontal);
        PacmanRotationLabel = new QLabel(SettingPage);
        PacmanRotationLabel->setObjectName("PacmanRotationLabel");
        PacmanRotationLabel->setGeometry(QRect(400, 420, 54, 21));
        PacmanRotationLabel->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-image: url(:/images/resources/blankBack.png);\n"
"color: rgb(255, 255, 0);\n"
"font: 700 italic 12pt \"Monotype Corsiva\";\n"
"}"));
        BeanRate = new QLabel(SettingPage);
        BeanRate->setObjectName("BeanRate");
        BeanRate->setGeometry(QRect(470, 240, 101, 21));
        BeanRate->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-image: url(:/images/resources/blankBack.png);\n"
"color: rgb(255, 255, 0);\n"
"font: 700 12pt \"Segoe Print\";\n"
"}"));
        BeanRateSlider = new QSlider(SettingPage);
        BeanRateSlider->setObjectName("BeanRateSlider");
        BeanRateSlider->setGeometry(QRect(600, 240, 160, 16));
        BeanRateSlider->setMinimum(1);
        BeanRateSlider->setMaximum(20);
        BeanRateSlider->setOrientation(Qt::Horizontal);
        BeanRateLabel = new QLabel(SettingPage);
        BeanRateLabel->setObjectName("BeanRateLabel");
        BeanRateLabel->setGeometry(QRect(770, 240, 54, 16));
        BeanRateLabel->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-image: url(:/images/resources/blankBack.png);\n"
"color: rgb(255, 255, 0);\n"
"font: 700 italic 12pt \"Monotype Corsiva\";\n"
"}"));
        PacmanAttack = new QLabel(SettingPage);
        PacmanAttack->setObjectName("PacmanAttack");
        PacmanAttack->setGeometry(QRect(520, 420, 54, 21));
        PacmanAttack->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-image: url(:/images/resources/blankBack.png);\n"
"color: rgb(255, 255, 0);\n"
"font: 700 12pt \"Segoe Print\";\n"
"}"));
        PacmanAttackSlider = new QSlider(SettingPage);
        PacmanAttackSlider->setObjectName("PacmanAttackSlider");
        PacmanAttackSlider->setGeometry(QRect(600, 420, 160, 16));
        PacmanAttackSlider->setMinimum(0);
        PacmanAttackSlider->setMaximum(10);
        PacmanAttackSlider->setValue(0);
        PacmanAttackSlider->setOrientation(Qt::Horizontal);
        PacmanAttackLabel = new QLabel(SettingPage);
        PacmanAttackLabel->setObjectName("PacmanAttackLabel");
        PacmanAttackLabel->setGeometry(QRect(770, 420, 54, 16));
        PacmanAttackLabel->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-image: url(:/images/resources/blankBack.png);\n"
"color: rgb(255, 255, 0);\n"
"font: 700 italic 12pt \"Monotype Corsiva\";\n"
"}"));
        ShootLimitSlider = new QSlider(SettingPage);
        ShootLimitSlider->setObjectName("ShootLimitSlider");
        ShootLimitSlider->setGeometry(QRect(600, 300, 160, 16));
        ShootLimitSlider->setMinimum(5);
        ShootLimitSlider->setMaximum(30);
        ShootLimitSlider->setOrientation(Qt::Horizontal);
        ShootLimitLabel = new QLabel(SettingPage);
        ShootLimitLabel->setObjectName("ShootLimitLabel");
        ShootLimitLabel->setGeometry(QRect(770, 300, 54, 16));
        ShootLimitLabel->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-image: url(:/images/resources/blankBack.png);\n"
"color: rgb(255, 255, 0);\n"
"font: 700 italic 12pt \"Monotype Corsiva\";\n"
"}"));
        Update = new QLabel(SettingPage);
        Update->setObjectName("Update");
        Update->setGeometry(QRect(520, 360, 71, 21));
        Update->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-image: url(:/images/resources/blankBack.png);\n"
"color: rgb(255, 255, 0);\n"
"font: 700 12pt \"Segoe Print\";\n"
"}"));
        UpdateSlider = new QSlider(SettingPage);
        UpdateSlider->setObjectName("UpdateSlider");
        UpdateSlider->setGeometry(QRect(600, 360, 160, 16));
        UpdateSlider->setMinimum(10);
        UpdateSlider->setMaximum(120);
        UpdateSlider->setOrientation(Qt::Horizontal);
        UpdateLabel = new QLabel(SettingPage);
        UpdateLabel->setObjectName("UpdateLabel");
        UpdateLabel->setGeometry(QRect(770, 360, 54, 16));
        UpdateLabel->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-image: url(:/images/resources/blankBack.png);\n"
"color: rgb(255, 255, 0);\n"
"font: 700 italic 12pt \"Monotype Corsiva\";\n"
"}"));

        retranslateUi(SettingPage);

        QMetaObject::connectSlotsByName(SettingPage);
    } // setupUi

    void retranslateUi(QWidget *SettingPage)
    {
        SettingPage->setWindowTitle(QCoreApplication::translate("SettingPage", "Setting", nullptr));
        ReturnParentInSetting->setText(QCoreApplication::translate("SettingPage", "Back", nullptr));
        QuitButtonInSetting->setText(QCoreApplication::translate("SettingPage", "Quit", nullptr));
        TimeLimitSetting->setText(QCoreApplication::translate("SettingPage", "\345\257\271\345\261\200\346\227\266\351\227\264", nullptr));
        TimeLimitLabel->setText(QString());
        PacmanLPSetting->setText(QCoreApplication::translate("SettingPage", "\347\224\237\345\221\275\345\200\274", nullptr));
        PacmanLPLabel->setText(QString());
        PacmanWalkSetting->setText(QCoreApplication::translate("SettingPage", "\347\247\273\345\212\250\351\200\237\345\272\246", nullptr));
        ShootLImit->setText(QCoreApplication::translate("SettingPage", "\346\224\273\345\207\273\351\227\264\346\255\207", nullptr));
        PacmanWalkLabel->setText(QString());
        BeanNum->setText(QCoreApplication::translate("SettingPage", "\350\261\206\345\255\220\346\200\273\346\225\260", nullptr));
        BeanNumLabel->setText(QString());
        PacmanRotation->setText(QCoreApplication::translate("SettingPage", "\346\227\213\350\275\254\351\200\237\345\272\246", nullptr));
        PacmanRotationLabel->setText(QString());
        BeanRate->setText(QCoreApplication::translate("SettingPage", "\350\261\206\345\255\220\347\224\237\346\210\220\351\200\237\345\272\246", nullptr));
        BeanRateLabel->setText(QString());
        PacmanAttack->setText(QCoreApplication::translate("SettingPage", "\346\224\273\345\207\273\345\212\233", nullptr));
        PacmanAttackLabel->setText(QString());
        ShootLimitLabel->setText(QString());
        Update->setText(QCoreApplication::translate("SettingPage", "\346\270\270\346\210\217\351\200\237\345\272\246", nullptr));
        UpdateLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SettingPage: public Ui_SettingPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGPAGE_H
