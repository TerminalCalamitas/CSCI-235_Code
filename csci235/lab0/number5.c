#include <stdio.h>

int above(int nums[], int size, int n) 
{
    int numGreater = 0; 
    for(int i = 0; i < size; i++)
    {
        if (nums[i] > n)
        {
            numGreater++;
        }
    }
    return numGreater;
}

int main() 
{
	int COMPARE = 4;
	int SIZE = 5;
	int a[SIZE]; //uninstantiated array
	a[0] = 5;
	a[1] = 2;
	a[2] = 10;
	a[3] = 23;
	a[4] = 1;
	int num = above(a, SIZE, COMPARE);
	printf("The number greater than %d is %d.\n", COMPARE,  num);
}
