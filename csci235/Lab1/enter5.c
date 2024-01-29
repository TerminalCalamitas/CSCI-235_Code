#include <stdio.h>

int main(){
    int vals[5];
    char input;

    printf("Enter five digits, one at a time:\n");


    for(int i = 0; i<5; i++){
	input = getchar();

        if(input >= '1' && input <= '9'){
           vals[i] = input - '0';
        } else {
	    vals[i] = 0;
        }
   }

   printf("vals contains:\n");

   for(int i = 0; i < 5; i++){
      printf("vals[%d]=%d, square=%d\n", i, vals[i], vals[i] * vals[i]);
   }

   return 0;
}
