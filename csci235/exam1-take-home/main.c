#include <stdio.h>
#include <stdlib.h>

// Defining StackNode type
typedef struct stack_node {
    struct stack_node* next;
    char* str;
    int num;
} StackNode;

// single pointer wasn't working so I used a pointer pointer and it seems to work
void push(StackNode** list, char* str, int num) {
    // Malloc memory for new stack node
    StackNode* newNode = (StackNode*) malloc(sizeof(StackNode));
    
    // setting values for new stack node
    newNode->str = str;
    newNode->num = num;
    newNode->next = *list;
    
    // reassigning the top of the list
    *list = newNode;
}

// I'm using a pointer pointer here cause it worked for push
void pop(StackNode** list) {
    // basic error check
    if (*list == NULL) {
	printf("[empty list]");
	return;
    }
    StackNode* toFree = *list;
    *list = (*list)->next;
    free(toFree);
}

// I'm not changing anything about the list so I'm using a single pointer
void print_stack(StackNode *list) {
    if (list == NULL) {
	printf("[empty list]\n");
    } else {
	printf("(%s,%d)", list->str, list->num);
	list = list->next;
	while (list != NULL) {
	    printf(", (%s,%d)", list->str, list->num);
	    list = list->next;
	}
	printf("\n");
    }
}

int main() {
    printf("Creating stack\n");
    StackNode* stack = NULL;    
    print_stack(stack);
    printf("pushing to stack\n");
    push(&stack, "csci", 235);
    print_stack(stack);
    printf("pushing 2 nodes to stack\n");
    push(&stack, "foo", 1);
    push(&stack, "bar", 17);
    print_stack(stack);
    printf("popping from stack\n");
    pop(&stack);
    print_stack(stack);

}
