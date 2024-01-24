#include <stdlib.h>
#include <stdio.h>

struct node
{
    int data;
    struct node *link;
};

struct node *create_node(struct node *last, int data)
{
    struct node *new_node = malloc(sizeof(struct node));
    new_node->data = data;
    new_node->link = NULL;
    if (last != NULL)
    {
        last->link = new_node;
    }
    return new_node;
}

void printList(struct node *current) // Corrected the type here
{
    if (current == NULL)
    {
        printf("NULL\n");
        return;
    }
    printf("%d -> ", current->data);
    printList(current->link); // Corrected the function call here
}

int main()
{
    struct node *ptr = malloc(sizeof(struct node));
    ptr->data = 45;
    ptr->link = NULL;
    struct node *body = malloc(sizeof(struct node));
    body->data = 12;
    body->link = NULL;
    ptr->link = body;
    struct node *last = body;
    last = create_node(last, 15);
    last = create_node(last, 1);
    last = create_node(last, 5);
    last = create_node(last, 23);
    struct node *current = last;
    printList(ptr);
    return 0;
}
