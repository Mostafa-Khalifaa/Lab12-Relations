#include "Rect.h"

Rect::Rect() : ul(), lr() {}

Rect::Rect(int x1, int y1, int x2, int y2) : ul(x1, y1), lr(x2, y2) {}

Rect::Rect(point p1, point p2) : ul(p1), lr(p2) {}

void Rect::draw(char canvas[30][80]) {
    int x1 = ul.getX(), y1 = ul.getY();
    int x2 = lr.getX(), y2 = lr.getY();

    for(int x = x1; x <= x2; x++) {
        if(y1 >= 0 && y1 < 30 && x >= 0 && x < 80)
            canvas[y1][x] = '#';

        if(y2 >= 0 && y2 < 30 && x >= 0 && x < 80)
            canvas[y2][x] = '#';
    }

    for(int y = y1; y <= y2; y++) {
        if(x1 >= 0 && x1 < 80 && y >= 0 && y < 30)
            canvas[y][x1] = '#';

        if(x2 >= 0 && x2 < 80 && y >= 0 && y < 30)
            canvas[y][x2] = '#';
    }
}
