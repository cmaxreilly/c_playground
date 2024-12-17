/*
 * Reverse a linked list in C
 * Author: C. Maxwell Reilly
 * Friday Dec 16, 2024
 */

#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;
	struct Node* next;
};

struct Node*
create_node(int value)
{
	struct Node* new_node = (struct Node*)malloc(sizeof(struct Node)); // Allocate memory for node 
	if (new_node == NULL)
	{
		printf("Memory allocation failed\n");
		exit(1);
	}
	new_node->data = value;
	new_node->next = NULL;
	return new_node;
}

void
print_list(struct Node* node)
{
	while (node != NULL)
	{
		printf(" %d", node->data);
		node = node->next;
	}
}

struct Node*
reverse_list(struct Node* head)
{
	struct Node* curr = head, *prev = NULL, *next = NULL;

	while(curr != NULL)
	{
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	return prev;
}

int
main(void)
{
	struct Node* head = create_node(1);
	head->next = create_node(2);
	head->next->next = create_node(3);
	head->next->next->next = create_node(4);
	head->next->next->next->next = create_node(5);
	printf("Original list: ");
	print_list(head);
	head = reverse_list(head);
	printf("\nReversed list: ");
	print_list(head);
	printf("\n");
	return 0;
}
