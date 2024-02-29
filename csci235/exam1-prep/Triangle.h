#ifndef TRIANGLE
#define TRIANGLE
    
typedef struct triangle {
    Point p1;
    Point p2;
    Point p3;
} Triangle;

double perimeter(Triangle);

double embiggen(Triangle);

#endif




