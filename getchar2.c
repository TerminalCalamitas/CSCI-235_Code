#include <stdio.h>
#define VALUE 55

int main()
{
	printf("Say something (ctrl-d to exit): ");
	char c = getchar();
	while (c != EOF)
	{
		printf("You typed %c [value = %d]\n", c, c);
		c = getchar();
	}
	printf("Goodbye!\n");
}
