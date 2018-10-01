#ifndef LINE_H
#define LINE_H
//Autor                 Alex Krieg
//Datum                 01.10.2018
#define LINE_VERSION   "01.00.01"


#include "line_global.h"
#include <geometry.h>

class LINESHARED_EXPORT Line : private QObject
{
    Q_OBJECT
    public:
        Line(QPainter *p);
        ~Line();

        void color(QColor col);
        QColor color();
        void width(unsigned int w);
        unsigned int width();
        void begin(QPoint pos);
        QPoint begin();
        void end(QPoint pos);
        QPoint end();
        void length(float length);
        float length();
        void angle(geometry::Angle angle);
        void angle(float degree);
        float angle();
        void rotate(float deltaDegree);
        void drawPos(QPoint pos);
        QPoint drawPos();

    signals:

    public slots:
        void draw();
    private slots:

    private:

        QPen *linePen;
        QPainter *painter;
        QPoint _posA;
        QPoint _posB;
        QPoint _drawPos;
        unsigned int _width;
        QColor _color;
        float _length;
        geometry::Angle _angle;
};

#endif // LINE_H
