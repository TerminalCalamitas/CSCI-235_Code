#include <stdio.h>

int is_palindrome(char str[]) {
	int len = 0;
	while (str[len] != '\0') {
		len++;
	}

	// loop backwards and make second char array
	for(int i = 0; i < len / 2; i++) {
		if(str[i] != str[len-1-i]) {
			return 0;
		}
	}
	return 1;
}


int main() {
	char car[] = "Toyota";
	char fastCar[] = "racecar";
	char mother[] = "mom";

	printf("%s is a palindrome if this is 1: %d\n", car, is_palindrome(car));
	printf("%s is a palindrome if this is 1: %d\n", fastCar, is_palindrome(fastCar));
	printf("%s is a palindrome if this is 1: %d\n", mother, is_palindrome(mother));
}



