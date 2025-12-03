#include "point.h"

point::point() : x(0), y(0) {}

point::point(int x, int y) : x(x), y(y) {}

void point::setX(int x) { this->x = x; }
void point::setY(int y) { this->y = y; }

int point::getX() { return x; }
int point::getY() { return y; }
