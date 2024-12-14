/*
 * Implementation of a node
 * Author: C. Maxwell Reilly
 * Friday Dec 13, 2024
 */

#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;
	struct Node* next;
};

struct Node*
init_node(int value)
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

int
main(void)
{
	struct Node* node1 = init_node(10);
	printf("the value stored in your node is %d\n", node1->data);
    return 0;
}


