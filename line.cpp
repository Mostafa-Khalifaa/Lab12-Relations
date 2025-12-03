#include "line.h"
#include <cmath>

line::line() : start(), end() {}

line::line(int x1, int y1, int x2, int y2) : start(x1, y1), end(x2, y2) {}

line::line(point p1, point p2) : start(p1), end(p2) {}

void line::draw(char canvas[30][80]) {
    int x1 = start.getX(), y1 = start.getY();
    int x2 = end.getX(), y2 = end.getY();

    int dx = x2 - x1;
    int dy = y2 - y1;
    int steps = std::max(abs(dx), abs(dy));

    float xInc = dx / (float)steps;
    float yInc = dy / (float)steps;

    float x = x1, y = y1;

    for(int i = 0; i <= steps; i++) {
        int px = (int)x, py = (int)y;
        if(px >= 0 && px < 80 && py >= 0 && py < 30)
            canvas[py][px] = '*';

        x += xInc;
        y += yInc;
    }
}
