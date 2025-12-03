#ifndef SHAPE_H
#define SHAPE_H

class shape {
public:
    virtual void draw(char canvas[30][80]) = 0; // Pure virtual
    virtual ~shape() {}
};

#endif
