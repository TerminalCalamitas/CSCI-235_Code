#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

#define SIZE 100

#define BUFSIZE 100
char buf[BUFSIZE];
int bufp=0;

int getch(void) /* get a (possibly pushed back) character */
{
    if (bufp > 0)
    {
	return buf[--bufp];
    }
    else
    {
	return getchar();
    }
}

void ungetch(int c) /* push character back on input */
{
    if (bufp >= BUFSIZE)
    {
	printf("ungetch: too many characters\n");
    }
    else
    {
	buf[bufp++] = c;
    }

}

/* getint: get next integer from input to *pn */
int getint(int *pn)
{
    int c, sign;

    while (isspace(c = getch()))  // skip whitespace
	;

    if (!isdigit(c) && c != EOF && c != '+' && c != '-') {
	ungetch(c);
	return 0;
    }
    sign = (c == '-') ? -1 : 1;
    if (c == '+' || c == '-')
	c = getch();
    for (*pn = 0; isdigit(c); c = getch()) {
	*pn = 10 * *pn + (c - '0');
    }
    *pn *= sign;
    if (c != EOF) {
	ungetch(c);
    }
    return c;
}

int doubleCapacity(int *array, int *capacity) {
    int newCapacity = *capacity * 2;
    array = (int*) realloc(array, newCapacity * sizeof(int));

    *capacity = newCapacity;
}

int main() {
    int capacity = 2;
    int n = 0;
    int *numArray = (int*) malloc(capacity * sizeof(int));
    int *input = (int*) malloc(1 * sizeof(int));

    while (1) {
	if (*input == EOF) {
	    break;
	}

	if (n == capacity) { // since capacity can only be powers of 2, double when you reach it
	    printf("%d is a power of 2", n);
	    doubleCapacity(numArray, &capacity);
	}
	
	getint(input);
	numArray[n] = *input;
	n++;
    }

    printf("capacity=%d\n",capacity);
    printf("n=%d\n",n);

    for (int i = 0; i < n; i++) {
	printf("array[%d]=%d\n", i, numArray[i]);
    }
    free(input);
    free(numArray);
}
