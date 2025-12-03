#ifndef LINE_H
#define LINE_H

#include "shape.h"
#include "point.h"

class line : public shape {
    point start, end;
public:
    line();
    line(int x1, int y1, int x2, int y2);
    line(point p1, point p2);
    void draw(char canvas[30][80]) override;
};

#endif
