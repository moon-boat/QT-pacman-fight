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
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingPage
{
public:
    QPushButton *ReturnParentInSetting;
    QPushButton *QuitButtonInSetting;

    void setupUi(QWidget *SettingPage)
    {
        if (SettingPage->objectName().isEmpty())
            SettingPage->setObjectName("SettingPage");
        SettingPage->setWindowModality(Qt::WindowModal);
        SettingPage->resize(1024, 768);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        QBrush brush1(QColor(46, 47, 48, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush2(QColor(68, 68, 68, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        SettingPage->setPalette(palette);
        SettingPage->setWindowOpacity(0.500000000000000);
        SettingPage->setAutoFillBackground(true);
        ReturnParentInSetting = new QPushButton(SettingPage);
        ReturnParentInSetting->setObjectName("ReturnParentInSetting");
        ReturnParentInSetting->setGeometry(QRect(500, 400, 92, 29));
        QPalette palette1;
        QBrush brush3(QColor(79, 208, 182, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        QBrush brush4(QColor(167, 167, 167, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush4);
        QBrush brush5(QColor(208, 208, 208, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush6(QColor(164, 166, 168, 96));
        brush6.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush4);
        ReturnParentInSetting->setPalette(palette1);
        QFont font;
        font.setPointSize(14);
        ReturnParentInSetting->setFont(font);
        ReturnParentInSetting->setStyleSheet(QString::fromUtf8("color::rgb(0, 0, 0)"));
        ReturnParentInSetting->setFlat(true);
        QuitButtonInSetting = new QPushButton(SettingPage);
        QuitButtonInSetting->setObjectName("QuitButtonInSetting");
        QuitButtonInSetting->setGeometry(QRect(370, 400, 92, 29));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush5);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush4);
        QuitButtonInSetting->setPalette(palette2);
        QuitButtonInSetting->setFont(font);
        QuitButtonInSetting->setFlat(true);

        retranslateUi(SettingPage);

        QMetaObject::connectSlotsByName(SettingPage);
    } // setupUi

    void retranslateUi(QWidget *SettingPage)
    {
        SettingPage->setWindowTitle(QCoreApplication::translate("SettingPage", "Setting", nullptr));
        ReturnParentInSetting->setText(QCoreApplication::translate("SettingPage", "Back", nullptr));
        QuitButtonInSetting->setText(QCoreApplication::translate("SettingPage", "Quit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingPage: public Ui_SettingPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGPAGE_H
