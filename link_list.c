#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

struct node *create_node(int d)
{
    struct node *new_node = malloc(sizeof(struct node));
    new_node->data = d;
    new_node->link = NULL;
    return new_node;
}

int main()
{
    struct node *head = malloc(sizeof(struct node));
    head->data = 34;
    head->link = NULL;

    struct node *body = malloc(sizeof(struct node));
    body->data = 45;
    body->link = NULL;

    head->link = body;

    struct node *create = create_node(25);


    struct node *ptr = head;
    while (ptr->link != NULL)
    {
        ptr = ptr->link;
    }
    ptr->link = create;

    struct node *print = head;
    if (print == NULL)
    {
        printf("Linked list is empty");
    }

    while (print != NULL)
    {
        printf("%d, ", print->data);
        print = print->link;
    }

    return 0;
}
