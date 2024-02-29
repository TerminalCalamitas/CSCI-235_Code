#include <stdio.h>
#include <stdlib.h>
#include "getint.h"
#include "linked_list.h"

int main() {
	Node* list = NULL;
	printf("Enter positive integers (enter a negative integer to quit):\n");
	int *intInput = (int*) malloc(sizeof(int));	
	getint(intInput);
	while (*intInput >= 0) {
		list = insert(list, *intInput);
		getint(intInput);	
	}

	print_list(list);
	printf("Enter a value to be deleted:\n");

	getint(intInput);
	delete_node(list, *intInput);
	print_list(list);
	list = free_list(list);
	print_list(list);
	free(intInput);
}
