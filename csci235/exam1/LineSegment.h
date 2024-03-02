#ifndef LINESEGMENT
#define LINESEGMENT

typedef struct linesegment {
    Point p1;
    Point p2;

} LineSegment;

double length(LineSegment);
double slope(LineSegment);

#endif
