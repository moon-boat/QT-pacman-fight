#include "mainwindow.h"
#include "music_player.h"
#include <QApplication>
#include <QAudio>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    Music_player music_player;
    w.show();
    music_player.music_play();
    music_player.print_state();
    return a.exec();
}
