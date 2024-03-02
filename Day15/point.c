#include <stdio.h>
#include "point.h"
#include "point.h"
#include <math.h>

double distance(Point p1, Point p2)
{
	// distance formula :square root of (x1-x2)^2 + (y1-y2)^2
	double part1 = pow((p1.x - p2.x), 2);
	double part2 = pow((p1.y - p2.y), 2);
	return sqrt(part1 + part2);
}

int main()
{
	struct point p1;
	Point p2 = {3.1, 4.2};

	p1.x = -2;
	p1.y = -1001;

	printf("p1 is (%f, %f)\n", p1.x, p1.y);
	printf("p2 is (%f, %f)\n", p2.x, p2.y);

	Triangle t1 = {3, 4, 5};

	printf("My triangle has sides: %f, %f, %f\n", t1.side1, 
			t1.side2, t1.side3);

	printf("The distance between p1 and p2 is %f\n", distance(p1, p2));
}
