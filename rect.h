#ifndef RECT_H
#define RECT_H

#include "shape.h"
#include "point.h"

class rect : public shape {
private:
    point ul;
    point lr;
public:
    rect();
    rect(int x1, int y1, int x2, int y2);
    rect(Point p1, Point p2);
    void draw(char canvas[30][80]);  // Override parent's draw()
};

#endif
