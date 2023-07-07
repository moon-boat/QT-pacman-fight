#include "music_player.h"

QString music_path{":/music/resources/music.mp3"};


QUrl audio("qrc:/music/resources/music.mp3");
Music_player::Music_player()
{
    player = new QMediaPlayer;
    output = new QAudioOutput;
    player -> setAudioOutput(output);
    player -> setSource(audio);
    output -> setMuted(0);
    qreal vol = 0.15;
    output -> setVolume(vol);
    player -> setLoops(1);


}
Music_player::~Music_player()
{
    delete player;
    delete output;
}
void Music_player::set_volumn(qreal volume){
    output->setVolume(volume);
}
void Music_player::set_muted(bool mute){
    //静音,输入为1时将音频静音
    output->setMuted(mute);
}
void Music_player::music_play()
{
    player->play();
}
void Music_player::print_state()
{
    //qDebug() << player->error();
}
