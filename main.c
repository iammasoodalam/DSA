#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *link;
} node;

node *header, *p, *new;

void traversal(node *header)
{
    p = header->link;
    while (p != NULL)
    {
        printf("%d \t", p->data);
        p = p->link;
    }
    printf("\n");
}

int main()
{
    int n; // n is number of elements.
    header = (node *)malloc(sizeof(node));
    header->data = NULL;
    header->link = NULL;
    p = header;

    printf("Enter the number of elements in the linked list: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        new = (node *)malloc(sizeof(node));
        printf("Enter the data for node %d: ", i + 1);
        scanf("%d", &new->data);
        new->link = NULL;
        p->link = new;
        p = new;
    }
    traversal(header);
    return 0;
}