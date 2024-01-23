#include <stdio.h>

void printarray(int x[], int len) 
{
	for (int i = 0; i < len; i++)
		printf("arr[%d] = %d\n", i, x[i]);
}

int main() 
{
	int a[5]; //uninstantiated array
	a[0] = 5;
	a[1] = 2;
	a[2] = 10;
	printarray(a,5);
}
