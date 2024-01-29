/* demonstration of the difference between
   a function declared f()
   and a function declared f(void)
*/

#include <stdio.h>

// declare fun1 before it is used
int fun1(int arg);

// declare fun2 before it is used
// explicitly state there are no arguments
int fun2(void);

// it is not NECESSARY to do this -- 
// only if you want to specify that there are no arguments and that having one is an error

int main() {

   int x = fun1(7); // okay because fun1 with empty is not specifying prototype
   int y = fun2();
   printf("x = %d, y = %d\n", x, y);
}

int fun1(int arg)
{
   return arg*2;
}

int fun2()
{
   return 99;
}
