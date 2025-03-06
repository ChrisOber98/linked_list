#include "linked_list.h"
#include <stdio.h>

int main()
{
	Node* head = ll_create_node(12);

	ll_push(&head, 1);
	ll_push(&head, 3);
	ll_push(&head, 5);
	ll_push(&head, 7);

	ll_display(head);

	return 0;
}