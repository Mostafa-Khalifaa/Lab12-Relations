#include "picture.h"
#include "circle.h"
#include "Rect.h"
#include "line.h"
#include <iostream>
using namespace std;

int main() {

    shape** arr = new shape*[3];

    arr[0] = new circle(15, 8, 5);
    arr[1] = new Rect(35, 5, 55, 12);
    arr[2] = new line(5, 20, 70, 25);

    picture pic;
    pic.addShapes(3, arr);

    pic.paint();

    delete arr[0];
    delete arr[1];
    delete arr[2];
    delete[] arr;

    return 0;
}
