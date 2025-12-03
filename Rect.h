#ifndef RECT_H
#define RECT_H

#include "shape.h"
#include "point.h"

class Rect : public shape {
    point ul, lr;
public:
    Rect();
    Rect(int x1, int y1, int x2, int y2);
    Rect(point p1, point p2);
    void draw(char canvas[30][80]) override;
};

#endif
