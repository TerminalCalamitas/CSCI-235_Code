#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

void addition()
{
	printf("Watch the magic as a positive number becomes negative\n");
	printf("through the power of adding one a few times.\n");
	int i = pow(2, 31) - 10;

	int count_neg = 0;
	while (1) {
		printf("%d\n", i);
		if (i < 0)
		{
			count_neg++;
			if (count_neg > 10)
				break;
		}
		i++;
	}
}

void subtraction()
{
 
	printf("Watch the magic as an unsigned number goes from 0 to Really Big\n");
	printf("through the power of subtracting 1.\n");
	int total_lines = 0;
	for (unsigned i = 10; i >=0; i--)
	{
		printf("i = %u\n", i);
		total_lines++;
		if (total_lines > 20)
			break;	// necessary, because i will never be >= 0 (it's unsigned)
	}	
}

void equals()
{

	float x = 12345;
	float y = 0.00001;
	printf("Watch the magic as adding something to a number has no effect!\n");
	printf("\nx = %f and y = %f\n", x, y);
	float z = x + y;
	printf("The result of z = %f + %f is %f\n", x, y, (x + y));
	printf("z = %f\n", z);
	if (x == z)
		printf("According to C, x == z !!\n");
	else
		printf("According to C, x != z\n");
}

void minus_one()
{
	printf("Consider the statement -1 > 0U\n\n");
	if (-1 > 0U)
		printf("C thinks -1 is > than 0 (unsigned)!!\n");
	else
		printf("C thinks -1 is <= 0 (unsigned)\n");
}

void floaty()
{
	// beware int division
	printf("If you programmed in Java, you'll be right at home.\n");
	printf("Beware int division:\n");
	double x = 5 / 4;
	printf("double x = 5 / 4 which equals %f\n", x);
	printf("double y = (double) 5 / 4 which equals %f\n", ((double)5/4));
	printf("double z = (double) (5 / 4) which equals %f\n", (double)(5/4));
	printf("double a = (double) ((double)5 / 4) which equals %f\n", (double)((double)5/4));
}

void error_con()
{
	printf("To run this program, use a command line argument:\n");
	printf("   Use add or -a for a while loop overflow using addition\n");
	printf("   Use sub or -s for a for loop underflow using subtraction\n");
	printf("   Use equals or -e for an unexpected identity\n");
	printf("   Use minus or -s for -1 > 0U \n");
	printf("   Use float or -f for float/integer division gotchas \n");
	exit(0);
}

int main(int argc, char* argv[]) {

	if (argc != 2)
	{
		error_con();
	}
	if (argc == 2)
	{
		if ((strcmp(argv[1], "add")==0) || (strcmp(argv[1], "-a")==0))
			addition();
		else if ((strcmp(argv[1], "sub")==0) || (strcmp(argv[1], "-s")==0))
			subtraction();
		else if ((strcmp(argv[1], "equals")==0) || (strcmp(argv[1], "-e")==0))
			equals();
		else if ((strcmp(argv[1], "minus")==0) || (strcmp(argv[1], "-m")==0))
			minus_one();
		else if ((strcmp(argv[1], "float")==0) || (strcmp(argv[1], "-f")==0))
			floaty();
		else
			error_con();
	}

		

	
}
