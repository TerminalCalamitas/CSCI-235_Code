#include <stdio.h>

double getNum() {

}

int main() {
    char string[5];
    string[4] = '\0';

    printf("Enter daily rainfall totals, one per line, use 'T' for trace, use '-1' to quit: ");
    int i = 0;
    char inputChar = getchar();
    while(i < 4 && inputChar != '\n') {
	string[i] = inputChar;
	i++;
	inputChar = getchar();
    }
    double totalRain = 0;

    while (inputNum != -1) {
	if (input != 'T') {
	    double inputNum = atof(string);
	    totalRain += inputNum;
	}

	input = getchar();
    }
}
