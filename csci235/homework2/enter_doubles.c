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

int doubleCapacity(int *array, int *size) {
    int newSize = *size * 2;
    int* newArray = (int*) malloc(*size * sizeof(int));
    
    for (int i = 0; i < *size; i++) {
	newArray[i] = array[i];
    }

    *size = newSize;
    array = newArray;
    free(newArray);
}

int main() {
    int capacity = 2;
    int n = 0;
    int *numArray = (int*) malloc(capacity * sizeof(int));
    int input = getint(&numArray[n]);
    n++;
    
    while (1) {
	 int input = getint(&numArray[n]);
	 if (input == EOF) {
	    break;
	 }

	 if (n + 1 == capacity) { // since capacity can only be powers of 2, double when you reach it
	    doubleCapacity(numArray, &capacity);
	 }

	 n++;
    }

    printf("capacity=%d\n",capacity);
    printf("n=%d\n",n);

    for (int i = 0; i < n; i++) {
	printf("array[%d]=%d\n", i, numArray[i]);
    }

    free(numArray);
}
