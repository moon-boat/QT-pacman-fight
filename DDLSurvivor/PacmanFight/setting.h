#ifndef SETTING_H
#define SETTING_H

#include <QObject>

class setting
{
public:
    setting();

    static int frameUpdateSeconds;
    static qreal pacmanWalkLength;
    static qreal pacmanRotation;
    static int beanYieldRate; // 1-100 for 0.1%-10% for each 1/30 second
    static int BeansLimit;
    static int shootingLimit;
    static int timeLimit; // 30s的demo测试数据
    static int bulletAttack;
    static int PacmanLifePoint;
    static QString wall_icon_path_ver[2];
    static QString wall_icon_path_hor[2];
};



#endif // SETTING_H
