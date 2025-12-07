#include "line.h"
#include <cmath>

line::line() : start(), end() {}

line::line(int x1, int y1, int x2, int y2) : start(x1, y1), end(x2, y2) {}

line::line(point p1, point p2) : start(p1), end(p2) {}

void line::draw(char canvas[30][80]) {
    int x1 = start.getX(), y1 = start.getY();
    int x2 = end.getX(), y2 = end.getY();

    int dx = abs(x2 - x1);
    int dy = abs(y2 - y1);

    int sx = (x1 < x2) ? 1 : -1;
    int sy = (y1 < y2) ? 1 : -1;

    int err = dx - dy;
    int x = x1, y = y1;

    while(true) {
        if(x >= 0 && x < 80 && y >= 0 && y < 30)
            canvas[y][x] = '*';

        if(x == x2 && y == y2)
            break;

        int e2 = 2 * err;

        if(e2 > -dy) {
            err -= dy;
            x += sx;
        }

        if(e2 < dx) {
            err += dx;
            y += sy;
        }
    }
}
