#ifndef GAME_H
#define GAME_H

#include <QWidget>

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
    QWidget *returnTo;
    void JustClose();
};

#endif // GAME_H
