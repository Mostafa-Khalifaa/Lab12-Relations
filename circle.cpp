#include "circle.h"

circle::circle() : cen(), r(0) {}

circle::circle(int x, int y, int radius) : cen(x, y), r(radius) {}

void circle::draw(char canvas[30][80]) {
    int cx = cen.getX(), cy = cen.getY();
    int r2 = r * r;

    for(int y = 0; y < 30; y++) {
        for(int x = 0; x < 80; x++) {
            int dx = x - cx;
            int dy = y - cy;
            int dist = dx*dx + dy*dy;

            if(dist >= r2 - r && dist <= r2 + r)
                canvas[y][x] = 'O';
        }
    }
}
