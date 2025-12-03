#ifndef POINT_H
#define POINT_H

class point {
    int x, y;
public:
    point();
    point(int x, int y);
    void setX(int x);
    void setY(int y);
    int getX();
    int getY();
};

#endif
