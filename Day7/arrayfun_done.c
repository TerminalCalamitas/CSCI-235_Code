#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void plus_one(int* arr, int size)
{
	for (int i = 0; i < size; i++)
		arr[i] = arr[i] + 1;
}

void printarray(int* arr, int len, char* name)
{
	printf("%s = [", name);		// name of the array and open bracket

	for (int i = 0; i < len; i++)
	{
		printf("%d", arr[i]);	// contents of the array, comma separated
		if (i != len-1)
			printf(", ");
	}
	printf("]\n");				// closing bracket and newline
}

char* arrtostr(int* arr, int size)
{
	char* ret = (char*) malloc (255 * sizeof(char));	// 255 is 'big enough'
	ret[0] = '[';									// opening bracket
	ret[1] = '\0';									// null-terminate
	for (int i = 0; i < size; i++)
	{
		char temp[10];					// local variable
		sprintf(temp, "%d", arr[i]);		// one array element -> string
		strcat(ret, temp);				// add it to ret
		if (i != size-1)		
			strcat(ret, ", ")	;			// add the ", " if not the last
	}
	strcat(ret, "]");
	return (ret);						// return our new string
}


int main()
{
	// Initialized with 10 items
	// We do not need to put how many items inside the []
	int arr1[] = {3, 1, 5, 7, 2, 4, 3, 8, 3, -1};

	// Uninitialized when created so we need to initialize it
	int arr2[5];
	for (int i =0; i < 5; i++)
		arr2[i] = (i + 1) * (i + 2);

	printf("Before:\n");
	printarray(arr1, 10, "arr1");
	printarray(arr2, 5, "arr2");

	plus_one(arr1, 10);
	plus_one(arr2, 5);

	//printf("%p\n", arr1);
	//printf("%p\n", arr2);

	printf("After:\n");
	printarray(arr1, 10, "arr1");
	printarray(arr2, 5, "arr2");	

	char* arr1str = arrtostr(arr1, 10);
	char* arr2str = arrtostr(arr2, 5);

	printf("arr1 = %s\n", arr1str);
	printf("arr2 = %s\n", arr2str);

	free(arr1str); // always clean up after yourself
	free(arr2str);
}
 
