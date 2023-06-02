#include "bean_object.h"

QRectF bean_size[3]{{-20,-20,40,40},{-10,-10,20,20},{-5,-5,10,10}};
QString bean_path{":/images/resources/bean.png"};

bean_object::bean_object(BeanType type,QPointF _pos):
    GameAbstractObject(bean_size[(int)type], bean_path, bean,_pos, 0, 0),
    Bean(type,_pos)
{

}
