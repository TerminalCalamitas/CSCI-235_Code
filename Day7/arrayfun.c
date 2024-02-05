#include <stdio.h>
int main()
{
	// Initialized with 10 items
	// We do not need to put how many items inside the []
	int arr1[] = {3, 1, 5, 7, 2, 4, 3, 8, 3, -1};

	// Uninitialized when created so we need to initialize it
	int arr2[5];
	for (int i =0; i < 5; i++)
		arr2[i] = (i + 1) * (i + 2);
}
