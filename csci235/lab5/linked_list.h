#ifndef LINKED_LIST

#define LINKED_LIST
	typedef struct node {
		int value;
		struct node* next;
	} Node;

	Node* insert(Node *p, int value);
	void print_list(Node *p);
	Node* free_list(Node *p);
	Node* delete_node(Node* p, int value);

#endif
