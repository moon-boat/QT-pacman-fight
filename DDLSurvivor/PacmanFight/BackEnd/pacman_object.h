#ifndef PACMAN_OBJECT_H
#define PACMAN_OBJECT_H

#include "gameabstractobject.h"
#include "pacman.h"

class pacman_object : public GameAbstractObject, public Pacman
{

private:
    int lastShoot;

protected:

public:
    pacman_object(int type);
    void setPosition(const QPointF& _pos);
    void set_angle(qreal angle);
    int lastShooting() const;
    int& lastShooting();
};

#endif // PACMAN_OBJECT_H
