/********************************************************************************
** Form generated from reading UI file 'game.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAME_H
#define UI_GAME_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Game
{
public:
    QPushButton *GameSettingButton;
    QLabel *RedScoreTextLabel;
    QLabel *RedScoreLabel;
    QLabel *BlueScoreTextLabel;
    QLabel *BlueScoreLabel;
    QGraphicsView *graphicsView;
    QProgressBar *RedLifeBar;
    QProgressBar *BlueLifeBar;
    QLabel *TimeCounter;

    void setupUi(QWidget *Game)
    {
        if (Game->objectName().isEmpty())
            Game->setObjectName("Game");
        Game->resize(1024, 768);
        Game->setFocusPolicy(Qt::StrongFocus);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/resources/ghost.png"), QSize(), QIcon::Normal, QIcon::Off);
        Game->setWindowIcon(icon);
        GameSettingButton = new QPushButton(Game);
        GameSettingButton->setObjectName("GameSettingButton");
        GameSettingButton->setGeometry(QRect(0, 0, 131, 41));
        GameSettingButton->setFocusPolicy(Qt::NoFocus);
        GameSettingButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-image: url(:/images/resources/blankBack.png);\n"
"color: rgb(255, 0, 4);\n"
"font: 16pt \"Segoe Print\";\n"
"}\n"
"QPushButton::hover{\n"
"	color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 0, 0, 255), stop:0.166 rgba(255, 255, 0, 255), stop:0.333 rgba(0, 255, 0, 255), stop:0.5 rgba(0, 255, 255, 255), stop:0.666 rgba(0, 0, 255, 255), stop:0.833 rgba(255, 0, 255, 255), stop:1 rgba(255, 0, 0, 255));\n"
"}"));
        GameSettingButton->setFlat(true);
        RedScoreTextLabel = new QLabel(Game);
        RedScoreTextLabel->setObjectName("RedScoreTextLabel");
        RedScoreTextLabel->setGeometry(QRect(130, 0, 131, 41));
        RedScoreTextLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);\n"
"font: italic 24pt \"Monotype Corsiva\";\n"
"text-decoration: underline;"));
        RedScoreTextLabel->setAlignment(Qt::AlignCenter);
        RedScoreLabel = new QLabel(Game);
        RedScoreLabel->setObjectName("RedScoreLabel");
        RedScoreLabel->setGeometry(QRect(260, 0, 60, 41));
        RedScoreLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);\n"
"font: italic 24pt \"Monotype Corsiva\";"));
        BlueScoreTextLabel = new QLabel(Game);
        BlueScoreTextLabel->setObjectName("BlueScoreTextLabel");
        BlueScoreTextLabel->setGeometry(QRect(833, 0, 131, 41));
        BlueScoreTextLabel->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);\n"
"font: italic 24pt \"Monotype Corsiva\";\n"
"text-decoration: underline;"));
        BlueScoreTextLabel->setAlignment(Qt::AlignCenter);
        BlueScoreLabel = new QLabel(Game);
        BlueScoreLabel->setObjectName("BlueScoreLabel");
        BlueScoreLabel->setGeometry(QRect(964, 0, 60, 41));
        BlueScoreLabel->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);\n"
"font: italic 24pt \"Monotype Corsiva\";"));
        graphicsView = new QGraphicsView(Game);
        graphicsView->setObjectName("graphicsView");
        graphicsView->setGeometry(QRect(0, 0, 1024, 768));
        graphicsView->setFocusPolicy(Qt::NoFocus);
        RedLifeBar = new QProgressBar(Game);
        RedLifeBar->setObjectName("RedLifeBar");
        RedLifeBar->setGeometry(QRect(330, 10, 118, 23));
        RedLifeBar->setStyleSheet(QString::fromUtf8("QProgressBar{\n"
"	color: rgb(242, 255, 124);\n"
"	background-color: rgb(0, 0, 0);\n"
"	font: 700 9pt \"Microsoft YaHei UI\";\n"
"}\n"
"QProgressBar::chunk{\n"
"	background-color: rgb(255, 93, 61);\n"
"}\n"
""));
        RedLifeBar->setMaximum(10);
        RedLifeBar->setValue(1);
        RedLifeBar->setAlignment(Qt::AlignCenter);
        BlueLifeBar = new QProgressBar(Game);
        BlueLifeBar->setObjectName("BlueLifeBar");
        BlueLifeBar->setGeometry(QRect(700, 10, 118, 23));
        BlueLifeBar->setStyleSheet(QString::fromUtf8("QProgressBar{\n"
"	color: rgb(242, 255, 124);\n"
"	background-color: rgb(0, 0, 0);\n"
"	font: 700 9pt \"Microsoft YaHei UI\";\n"
"}\n"
"QProgressBar::chunk{\n"
"	background-color: rgb(80, 132, 255);\n"
"}\n"
""));
        BlueLifeBar->setMaximum(10);
        BlueLifeBar->setValue(2);
        BlueLifeBar->setAlignment(Qt::AlignCenter);
        TimeCounter = new QLabel(Game);
        TimeCounter->setObjectName("TimeCounter");
        TimeCounter->setGeometry(QRect(500, 0, 150, 41));
        TimeCounter->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-image: url(:/images/resources/blankBack.png);\n"
"	color: rgb(0, 0, 127);\n"
"font: 16pt \"Segoe Print\";\n"
"}"));
        TimeCounter->setAlignment(Qt::AlignCenter);
        graphicsView->raise();
        GameSettingButton->raise();
        RedScoreTextLabel->raise();
        RedScoreLabel->raise();
        BlueScoreTextLabel->raise();
        BlueScoreLabel->raise();
        RedLifeBar->raise();
        BlueLifeBar->raise();
        TimeCounter->raise();

        retranslateUi(Game);

        QMetaObject::connectSlotsByName(Game);
    } // setupUi

    void retranslateUi(QWidget *Game)
    {
        Game->setWindowTitle(QCoreApplication::translate("Game", "GhostFight", nullptr));
        GameSettingButton->setText(QCoreApplication::translate("Game", "Setting", nullptr));
        RedScoreTextLabel->setText(QCoreApplication::translate("Game", "Score:", nullptr));
        RedScoreLabel->setText(QString());
        BlueScoreTextLabel->setText(QCoreApplication::translate("Game", "Score:", nullptr));
        BlueScoreLabel->setText(QString());
        RedLifeBar->setFormat(QCoreApplication::translate("Game", "%v/%m", nullptr));
        BlueLifeBar->setFormat(QCoreApplication::translate("Game", "%v/%m", nullptr));
        TimeCounter->setText(QCoreApplication::translate("Game", "01:00", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Game: public Ui_Game {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAME_H
