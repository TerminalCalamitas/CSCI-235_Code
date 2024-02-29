#ifndef POINT_H__
#define POINT_H__

typedef struct point {
	int x;
	int y;
} Point;

double distance(Point one, Point two);

double cromulence(Point one, Point two);

#endif
