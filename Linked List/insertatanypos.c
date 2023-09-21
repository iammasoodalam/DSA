#include <stdio.h>
#include "node.h"

node *insertAtAnyPosition(node *header)
{
  int n, position, size = 0; // n is number of nodes to be inserted and 'size' is size of linked list.
  node *p = header->link;
  printf("Enter the position of the new nodes: ");
  scanf("%d", &position);

  // Calculating the size of the list.
  while (p != NULL)
  {
    p = p->link;
    size++;
  }
  p = header->link; // reinitialize pointer for further use.
  // Checking if insert at position is possible
  if (position < 1 || position > size + 1)
  {
    printf("Insert at %d is not possible...\n", position);
    return header;
  }

  printf("Enter the number of nodes to be inserted: ");
  scanf("%d", &n);

  for (int i = 1; i < position - 1; i++)
  {
    p = p->link;
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
    new->link = p->link;
    p->link = new;
    p = new;
    n--;
  }
  return header;
}