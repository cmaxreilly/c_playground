/*
 * Author: C. Maxwell Reilly
 * Started: Friday, Jun 23, 2023
 * Finished:
 */

#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

static void
reverse(struct Node** head_ref)
{
    struct Node* prev = NULL;
    struct Node* current = *head_ref;
    struct Node* next = NULL;
    while (current != NULL)
    {
        // store next
        next = current->next;
        // reverse current node's pointers
        current->next = prev;
        // Move pointers one position ahead.
        prev = current;
        current = next;
    }
    *head_ref = prev;
}

/* Function to push a node */

void
push(struct Node** head_ref, int new_data)
{
    struct Node* new_node
        = (struct Node*) malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

/* Function to print linked list */

void
print_list(struct Node* head)
{
    struct Node* temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

/* Driver code */

int
main()
{
    struct Node* head = NULL;
    push(&head, 10);
    push(&head, 11);
    push(&head, 90);
    push(&head, 50);
    push(&head, 69);

    printf("Given Linked List\n");
    print_list(head);
    reverse(&head);
    printf("\nReversed Linked List\n");
    print_list(head);
    printf("\n");
    return 0;
}
