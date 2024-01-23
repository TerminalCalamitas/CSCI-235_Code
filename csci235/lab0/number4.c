#include <stdio.h>
int main() {
    printf("Enter characters, one at a time,\nuse ctrl-d to quit:\n");
    char c = getchar();
    int Xcount = 0;
    while (c != EOF)
    {
	if(c=='X')
        {
            Xcount++;
        }
	c = getchar();
    }
    printf("You entered X %d times\n", Xcount);
}
