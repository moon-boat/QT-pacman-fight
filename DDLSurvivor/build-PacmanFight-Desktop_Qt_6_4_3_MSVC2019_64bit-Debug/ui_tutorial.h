/********************************************************************************
** Form generated from reading UI file 'tutorial.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TUTORIAL_H
#define UI_TUTORIAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Tutorial
{
public:
    QPushButton *ReturnButtonInTutorial;
    QLabel *label;
    QLabel *tutorial_text;

    void setupUi(QDialog *Tutorial)
    {
        if (Tutorial->objectName().isEmpty())
            Tutorial->setObjectName("Tutorial");
        Tutorial->resize(1024, 768);
        Tutorial->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"background-image: url(:/images/resources/Tutorial_BG.png);"));
        ReturnButtonInTutorial = new QPushButton(Tutorial);
        ReturnButtonInTutorial->setObjectName("ReturnButtonInTutorial");
        ReturnButtonInTutorial->setGeometry(QRect(457, 710, 111, 31));
        QPalette palette;
        QBrush brush(QColor(255, 0, 4, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush2(QColor(255, 0, 4, 128));
        brush2.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        ReturnButtonInTutorial->setPalette(palette);
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe Print")});
        font.setPointSize(16);
        font.setBold(false);
        font.setItalic(false);
        ReturnButtonInTutorial->setFont(font);
        ReturnButtonInTutorial->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-image: url(:/images/resources/blankBack.png);\n"
"color: rgb(255, 0, 4);\n"
"font: 16pt \"Segoe Print\";\n"
"}\n"
"QPushButton::hover{\n"
"	color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 0, 0, 255), stop:0.166 rgba(255, 255, 0, 255), stop:0.333 rgba(0, 255, 0, 255), stop:0.5 rgba(0, 255, 255, 255), stop:0.666 rgba(0, 0, 255, 255), stop:0.833 rgba(255, 0, 255, 255), stop:1 rgba(255, 0, 0, 255));\n"
"}"));
        ReturnButtonInTutorial->setFlat(true);
        label = new QLabel(Tutorial);
        label->setObjectName("label");
        label->setGeometry(QRect(137, 0, 751, 391));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/resources/Tutorial.png")));
        label->setScaledContents(true);
        tutorial_text = new QLabel(Tutorial);
        tutorial_text->setObjectName("tutorial_text");
        tutorial_text->setGeometry(QRect(70, 390, 881, 301));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe Print")});
        tutorial_text->setFont(font1);
        tutorial_text->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	background-color: rgba(255, 255, 255, 0);\n"
"	background-image: url(:/images/resources/blankBack.png);\n"
"}"));

        retranslateUi(Tutorial);

        QMetaObject::connectSlotsByName(Tutorial);
    } // setupUi

    void retranslateUi(QDialog *Tutorial)
    {
        Tutorial->setWindowTitle(QCoreApplication::translate("Tutorial", "Dialog", nullptr));
        ReturnButtonInTutorial->setText(QCoreApplication::translate("Tutorial", "Back", nullptr));
        label->setText(QString());
        tutorial_text->setText(QCoreApplication::translate("Tutorial", "<html><head/><body><p><span style=\" font-size:14pt;\">The Pacman on the left:press A to rotate counterclockwise,D to rotate clockwise,</span></p><p><span style=\" font-size:14pt;\">W to move forward,S to shoot a bullet.</span></p><p><span style=\" font-size:14pt;\">The Pacman on the right:press HOME to rotate counterclockwise,END to rotate clockwise,</span></p><p><span style=\" font-size:14pt;\">PGUP to move forward,PGDN to shoot a bullet.</span></p><p><span style=\" font-size:14pt;\">You need to keep away from the ghost,otherwise you will die.</span></p><p><span style=\" font-size:14pt;\">In order to score points you need to eat the beans,Different sizes of beans corresponding to different scores.</span></p><p><span style=\" font-size:14pt;\">Pacman who scores higher within the time limit wins!</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Tutorial: public Ui_Tutorial {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TUTORIAL_H
