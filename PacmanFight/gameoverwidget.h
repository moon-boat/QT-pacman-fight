#ifndef GAMEOVERWIDGET_H
#define GAMEOVERWIDGET_H

#include <QDialog>

namespace Ui {
class GameOverWidget;
}

class GameOverWidget : public QDialog
{
    Q_OBJECT

public:
    explicit GameOverWidget(int winner, QWidget *parent = nullptr);
    ~GameOverWidget();

private slots:
    void on_RestartInGameOverWidget_clicked();

    void on_QuitInGameOverWidget_clicked();

signals:
    void newOne(bool a);

private:
    Ui::GameOverWidget *ui;
};

#endif // GAMEOVERWIDGET_H
