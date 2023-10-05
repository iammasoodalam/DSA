#include <stdio.h>
#include "node.h"

node *insertAtEndLL(node *header)
{
  node *ptr;
  int n; // number of nodes to be inserted
  printf("Enter the number of nodes to be inserted: ");
  scanf("%d", &n);

  // setting a pointer at the end of the linked list.
  ptr = header->link;
  while (ptr->link != NULL)
  {
    ptr = ptr->link;
  }

  while (n != 0)
  {
    node *new = (node *)malloc(sizeof(node));
    if (new == NULL)
    {
      printf("Memory insufficient...\n\n");
      return header;
    }
    printf("Enter the data for the new node: ");
    scanf("%d", &new->data);
    new->link = NULL;
    ptr->link = new;
    ptr = new;
    n--;
  }
  return header;
}