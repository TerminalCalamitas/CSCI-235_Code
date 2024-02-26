#include <stdio.h>

int main()
{
	int num = -1;
	unsigned unum = (unsigned) num;

	printf("%d\n", num);
	printf("%u\n", unum);

	if (num < 0)
		printf("%d num is less than zero. The universe still works.\n", num);

	if (unum < 0U)
		printf("%d unum is less than zero. The universe still works.\n", unum);
	else
		printf("%d unum is not less than zero. There is something wrong with the universe.\n", unum);	
}
