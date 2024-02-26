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
	if(p == NULL) {
		printf("[empty list]");
	}

	while(p != NULL) {
		printf("%d ", p->value);	
		p = p->next;
	}
	printf("\n");
}

Node* free_list(Node *p) {
	Node *track;
	while (p != NULL) {
		track = p;
		while(track->next != NULL) {	
			track = track->next;
		}
		free(track);
	}
	return p;
}

Node* delete_node(Node* p, int value) {

}

int main() {
	Node* list;

	list = insert(list, 10);

	print_list(list);
	free_list(list);
	print_list(list);
}
