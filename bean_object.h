#ifndef BEAN_OBJECT_H
#define BEAN_OBJECT_H


#include "gameabstractobject.h"
#include "bean.h"
class bean_object : public GameAbstractObject ,public Bean
{

private:

protected:

public:
    bean_object(BeanType type,QPointF _pos);
};

#endif // BEAN_OBJECT_H
