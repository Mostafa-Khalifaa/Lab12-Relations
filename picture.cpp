#include "picture.h"
#include <iostream>
using namespace std;

picture::picture() : shapes(nullptr), shapeCount(0) {
    clearCanvas();
}

picture::~picture() {
}

void picture::addShapes(int n, shape** arr) {
    shapeCount = n;
    shapes = arr;
}

void picture::clearCanvas() {
    for(int i = 0; i < 30; i++)
        for(int j = 0; j < 80; j++)
            canvas[i][j] = ' ';
}

void picture::paint() {
    clearCanvas();

    for(int i = 0; i < shapeCount; i++)
        shapes[i]->draw(canvas);

    for(int i = 0; i < 30; i++) {
        for(int j = 0; j < 80; j++)
            cout << canvas[i][j];
        cout << endl;
    }
}
