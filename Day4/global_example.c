#include <stdio.h>

int y = 1; // "global" variable

int times_y(int x)
{
   extern int y; // declared extern; actually not necessary since y is in this file
   return x * y;
}

int main()
{
   extern int y; // declared extern; actually not necessary since y is in this file
   int x = 5;
   x = times_y(x);
   printf("x = %d\n", x);
   y++;
   x = times_y(x);
   printf("x = %d\n", x);
}
