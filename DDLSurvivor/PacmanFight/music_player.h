#ifndef MUSIC_PLAYER_H
#define MUSIC_PLAYER_H

#include <QMediaPlayer>
#include <QMediaPlayer>
#include <QUrl>
#include <QAudioOutput>
#include <QAudio>
#include <QAudioDevice>
#include <QObject>
#include <QDebug>

class Music_player: public QObject
{
public:
    Music_player();
    ~Music_player();
    void set_volumn(qreal volume);
    void music_play();
    void set_muted(bool mute);//是否静音
    void print_state();
private:
    QMediaPlayer *player;
    QAudioOutput *output;

};

#endif // MUSIC_PLAYER_H
