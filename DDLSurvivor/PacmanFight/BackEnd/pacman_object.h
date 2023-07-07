#ifndef PACMAN_OBJECT_H
#define PACMAN_OBJECT_H

#include "gameabstractobject.h"
#include "pacman.h"

class pacman_object : public GameAbstractObject, public Pacman
{

private:
    long long lastShoot;

protected:

public:
    pacman_object(int type);
    void setPosition(const QPointF& _pos);
    void set_angle(qreal angle);
    long long lastShooting() const;
    long long& lastShooting();
};

#endif // PACMAN_OBJECT_H
