#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
	int data;
	struct Node* next;
} Node;

Node* ll_create_node(int val);

void ll_display(Node *head);

void ll_push(Node **head, int val);

#endif // LINKED_LIST_H