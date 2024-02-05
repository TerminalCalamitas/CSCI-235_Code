#include <stdio.h>

int main()
{
	char str[7];

	str[1] = 'f';
	str[0] = 'a';
	str[2] = 't';
	str[3] = 'e';
	str[4] = 'r';
	printf("Your string is <%s>\n", str);
}
