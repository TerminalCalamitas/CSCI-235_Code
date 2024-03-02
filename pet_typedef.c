#include <stdio.h>

typedef struct pet {
    double length; // assuming inches
    char* name;
    int age; //assuming years
    char* color;
    char* species;

} Snake;

void grow(Snake* pet, double amount) {
    if(pet == NULL) {
	return;
    }
    pet->length = pet->length + amount;
}

int main() {
    Snake snake = {18.4, "Noodle", 2, "Copper and red and yellow", "Eastern Corn Snake"};
    printf("Pet info: %f, %s, %d, %s, %s\n", snake.length, snake.name, snake.age, snake.color, snake.species);
    grow(&snake, 3.215);
    printf("Oh? %s grew to %f inches!\n", snake.name, snake.length);
    
}

