#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"
#include "point.h"

class circle : public shape {
    point cen;
    int r;
public:
    circle();
    circle(int x, int y, int radius);
    void draw(char canvas[30][80]) override;
};

#endif
