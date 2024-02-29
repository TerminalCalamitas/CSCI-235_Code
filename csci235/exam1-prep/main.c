#include <stdio.h>
#include "Point.h"
#include "Triangle.h"

void triangle_test(Triangle r, char* name)
{
	printf("The perimeter of the triangle %s is %f\n", name, perimeter(r));
	printf("The embiggening of the triangle %s is %f\n", name, embiggen(r));
}

int main()
{
	Triangle t1 = { {3, 1}, {3, 4}, {-1, 1} };

	Point pt21 = {4, -2};
	Point pt22 = {6, 2};
	Point pt23 = {6, -2};

	Triangle t2 = { pt21, pt22, pt23 };

	Triangle t3;
	Point pt31 = {1, -2};
	Point pt32 = {4, -1};
	Point pt33 = {2, 5};

	t3.p1 = pt31;
	t3.p2 = pt32;
	t3.p3 = pt33;

	triangle_test(t1, "t1");
	printf("For t1, the perimeter should have been 12 and the embiggening about 10.034\n\n");
	triangle_test(t2, "t2");
	printf("For t2, the perimeter should have been 10.47 and the embiggening about 10.57\n\n");
	triangle_test(t3, "t3");
	printf("For t3, the perimeter should have been 16.55 and the embiggening about 9.84\n\n");
}
