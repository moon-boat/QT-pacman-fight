#include "setting.h"

setting::setting()
{

}

int setting::frameUpdateSeconds = 33; // /1000 / 游戏速度
int setting::TrueFrameUpdateSeconds = 33; // /1000
qreal setting::pacmanWalkLength = 0.03; // / pacman每秒移动pacmanWalkLength * 1000个像素
qreal setting::pacmanRotation = 0.06; //  /pacman每秒旋转 * 1000 度
int setting::beanYieldRate = 5; // / 1-100 for 0.1%-10% for each 1/30 second
int setting::BeansLimit = 20;// /
int setting::shootingLimit = 10; // /至少每shootingLimit帧才能发射一发子弹
int setting::timeLimit = 900; // / 30s的demo测试数据/
int setting::bulletAttack = 1;// /
int setting::PacmanLifePoint = 10; // /
QString setting::wall_icon_path_ver[2] {":/images/resources/wall(1).png", ":/images/resources/wall_fivetimes_vertical.jpg"};
QString setting::wall_icon_path_hor[2] {":/images/resources/wall(1)(1).jpg", ":/images/resources/wall_fivetimes_horizontal.jpg"};
