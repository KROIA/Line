// Autor    Alex Krieg
// Version  01.00.01
// Datum    01.10.2018

#include "line.h"

Line::Line(QPainter *p)
{
    this->painter = p;
    linePen = new QPen;

    drawPos(QPoint(0,0));
    begin(QPoint(0,0));
    width(10);
    length(50);
    angle(0);
    color(QColor(0,255,0));
}

Line::~Line()
{

}
void Line::color(QColor col)
{
    _color = col;
    linePen->setColor(_color);
}
QColor Line::color()
{
    return _color;
}
void Line::width(unsigned int w)
{
    _width = w;
    linePen->setWidth(_width);
}
unsigned int Line::width()
{
    return _width;
}
void Line::begin(QPoint pos)
{
    _posA = pos;
    _length = sqrt((float)(pow(_posB.x()-_posA.x(),2) + pow(_posB.y()-_posA.y(),2)));
}
QPoint Line::begin()
{
    return _posA;
}
void Line::end(QPoint pos)
{
    _posB = pos;
    _length = sqrt((float)(pow(_posB.x()-_posA.x(),2) + pow(_posB.y()-_posA.y(),2)));
}
QPoint Line::end()
{
    return _posB;
}
void Line::length(float length)
{
    _length = length;
   // _posB.setX();
}
float Line::length()
{
    return _length;
}
void Line::angle(geometry::Angle angle)
{
    _angle = angle;
}
void Line::angle(float degree)
{
    _angle = degree;
    _posB.setX(_posA.x() + _length * cos((double)_angle.rad()));
    _posB.setY(_posA.y() + _length * sin((double)_angle.rad()));
}
float Line::angle()
{
    return _angle.degree();
}
void Line::rotate(float deltaDegree)
{
    angle(angle() + deltaDegree);
}
void Line::drawPos(QPoint pos)
{
    _drawPos = pos;
}
QPoint Line::drawPos()
{
    return _drawPos;
}

void Line::draw()
{
    //linePen->setColor(lineColor);
    //linePen->setWidth(width);
    painter->setPen(*linePen);
    painter->translate(_drawPos);
    painter->drawLine(_posA,_posB);
    painter->translate(QPoint(-_drawPos.x(),-_drawPos.y()));
}
