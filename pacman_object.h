#ifndef PACMAN_OBJECT_H
#define PACMAN_OBJECT_H


#include "gameabstractobject.h"
#include "pacman.h"
class pacman_object : public GameAbstractObject ,public Pacman
{

private:

protected:

public:
    pacman_object(int type);
    void setPosition(const QPointF& _pos);
    void set_angle(qreal angle);

};

#endif // PACMAN_OBJECT_H
