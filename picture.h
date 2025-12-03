#ifndef PICTURE_H
#define PICTURE_H

#include "shape.h"

class picture {
    shape** shapes;
    int shapeCount;
    char canvas[30][80];

public:
    picture();
    ~picture();
    void addShapes(int n, shape** arr);
    void clearCanvas();
    void paint();
};

#endif
