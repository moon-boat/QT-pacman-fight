#include "bean_object.h"
QRectF bean_size[3]{{0,0,40,40},{0,0,20,20},{0,0,10,10}};
QString bean_path{":/images/resources/bean.png"};
bean_object::bean_object(BeanType type,QPointF _pos):GameAbstractObject(bean_size[(int)type], bean_path, bean,_pos, 0, 0),
    Bean(type,_pos)
{

}
