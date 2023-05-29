#ifndef GAME_H
#define GAME_H

#include <QWidget>
#include "settingpage.h"
#include "mainwindow.h"

namespace Ui {
class Game;
}

class Game : public QWidget
{
    Q_OBJECT

public:
    explicit Game(QWidget *parent = nullptr, QWidget *main = nullptr);
    ~Game();

    void recQuitSign(bool a);

private slots:
    void on_GameSettingButton_clicked();

private:
    Ui::Game *ui;
    MainWindow *returnTo;
    SettingPage *sp;
    void JustClose();
};

#endif // GAME_H
