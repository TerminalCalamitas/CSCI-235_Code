#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

Node* insert(Node *p, int value) {
	Node* nNode = (Node*) malloc(sizeof(Node));
	nNode->value = value;
	nNode->next = p;
	return nNode;
}

void print_list(Node *p) {
	if (p == NULL) {
		printf("[empty list]");
	}
	while(p != NULL) {
		printf("%d ", p->value);
		p = p->next;
	}
	printf("\n");
}

Node* free_list(Node *p) {
	if (p == NULL) {
		return NULL;
	}
	if(p->next != NULL) {
		free_list(p->next);
	}
	free(p);
	return NULL;
}

Node* delete_node(Node* p, int value) {
	if (p -> value == value) {
		p-> value = p->next->value;
		p->next = p->next->next;
		return p;
	}
	while(p->next != NULL) {
		if(p->next->value == value) {
			p->next = p->next->next;
		}
		p = p -> next;
	}
	return p;
}
/*
int main() {
	Node* list;

	print_list(list);

	list = insert(list, 10);
	list = insert(list, 11);
	list = insert(list, 12);

	print_list(list);
	delete_node(list, 11);
	print_list(list);
	free_list(list);
	printf("we freed the list\n");
	print_list(list);
}*/
