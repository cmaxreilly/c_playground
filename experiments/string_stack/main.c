/*
 * Author: C. Maxwell Reilly
 */

#include<stdio.h>
#include<stdlib.h>

struct Node {
    char * data;
    struct Node* next;
};

/* Function to push a node */
void
push(struct Node** head_ref, char * new_data)
{
    struct Node* new_node
        = (struct Node*) malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

/* Driver code */
int
main()
{
    struct Node head;
    printf("Hello! This utility pops and pushes string values to a stack implemented with a linked list.\n");
    printf("Please limit word lenght to 20 characters or less.\n");
    printf("Initializing stack...\n");
    printf("Stack initialialized.\n");
    return 0;
}
