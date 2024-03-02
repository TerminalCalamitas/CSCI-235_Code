#ifndef POINT_H__
#define POINT_H__

typedef struct point {
	double x;
	double y;
} Point;

struct triangle {
	double side1;
	double side2;
	double side3;
};

double distance(Point p1, Point p2);

typedef struct triangle Triangle;
#endif
