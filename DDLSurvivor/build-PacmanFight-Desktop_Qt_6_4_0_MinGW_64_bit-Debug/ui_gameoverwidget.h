/********************************************************************************
** Form generated from reading UI file 'gameoverwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEOVERWIDGET_H
#define UI_GAMEOVERWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_GameOverWidget
{
public:
    QPushButton *RestartInGameOverWidget;
    QPushButton *QuitInGameOverWidget;
    QLabel *WinnerDisplayInGameOverWidget;

    void setupUi(QDialog *GameOverWidget)
    {
        if (GameOverWidget->objectName().isEmpty())
            GameOverWidget->setObjectName("GameOverWidget");
        GameOverWidget->resize(1024, 768);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/resources/bean.png"), QSize(), QIcon::Normal, QIcon::Off);
        GameOverWidget->setWindowIcon(icon);
        GameOverWidget->setWindowOpacity(1.000000000000000);
        GameOverWidget->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0, 0);\n"
"border-color: rgba(0, 0, 0, 0);"));
        GameOverWidget->setModal(true);
        RestartInGameOverWidget = new QPushButton(GameOverWidget);
        RestartInGameOverWidget->setObjectName("RestartInGameOverWidget");
        RestartInGameOverWidget->setGeometry(QRect(250, 470, 131, 41));
        RestartInGameOverWidget->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-image: url(:/images/resources/blankBack.png);\n"
"color: rgb(255, 0, 4);\n"
"font: 16pt \"Segoe Print\";\n"
"}\n"
"QPushButton::hover{\n"
"	color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 0, 0, 255), stop:0.166 rgba(255, 255, 0, 255), stop:0.333 rgba(0, 255, 0, 255), stop:0.5 rgba(0, 255, 255, 255), stop:0.666 rgba(0, 0, 255, 255), stop:0.833 rgba(255, 0, 255, 255), stop:1 rgba(255, 0, 0, 255));\n"
"}"));
        RestartInGameOverWidget->setAutoDefault(false);
        RestartInGameOverWidget->setFlat(true);
        QuitInGameOverWidget = new QPushButton(GameOverWidget);
        QuitInGameOverWidget->setObjectName("QuitInGameOverWidget");
        QuitInGameOverWidget->setGeometry(QRect(570, 470, 92, 41));
        QuitInGameOverWidget->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-image: url(:/images/resources/blankBack.png);\n"
"color: rgb(255, 0, 4);\n"
"font: 16pt \"Segoe Print\";\n"
"}\n"
"QPushButton::hover{\n"
"	color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 0, 0, 255), stop:0.166 rgba(255, 255, 0, 255), stop:0.333 rgba(0, 255, 0, 255), stop:0.5 rgba(0, 255, 255, 255), stop:0.666 rgba(0, 0, 255, 255), stop:0.833 rgba(255, 0, 255, 255), stop:1 rgba(255, 0, 0, 255));\n"
"}"));
        QuitInGameOverWidget->setAutoDefault(false);
        QuitInGameOverWidget->setFlat(true);
        WinnerDisplayInGameOverWidget = new QLabel(GameOverWidget);
        WinnerDisplayInGameOverWidget->setObjectName("WinnerDisplayInGameOverWidget");
        WinnerDisplayInGameOverWidget->setGeometry(QRect(340, 200, 251, 71));
        WinnerDisplayInGameOverWidget->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-image: url(:/images/resources/blankBack.png);\n"
"color: rgb(255, 0, 4);\n"
"font: 16pt \"Segoe Print\";\n"
"}"));
        WinnerDisplayInGameOverWidget->setAlignment(Qt::AlignCenter);

        retranslateUi(GameOverWidget);

        QMetaObject::connectSlotsByName(GameOverWidget);
    } // setupUi

    void retranslateUi(QDialog *GameOverWidget)
    {
        GameOverWidget->setWindowTitle(QCoreApplication::translate("GameOverWidget", "GameOver!", nullptr));
        RestartInGameOverWidget->setText(QCoreApplication::translate("GameOverWidget", "Restart", nullptr));
        QuitInGameOverWidget->setText(QCoreApplication::translate("GameOverWidget", "Quit", nullptr));
        WinnerDisplayInGameOverWidget->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class GameOverWidget: public Ui_GameOverWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEOVERWIDGET_H
