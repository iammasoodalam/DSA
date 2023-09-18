#include <stdio.h>
#include "node.h"

node *insertAtBeginning(node *header)
{
  int n; // number of nodes to be inserted.
  traversal(header);
  printf("Enter the number of nodes to be inserted: ");
  scanf("%d", &n);
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
    new->link = header->link;
    header->link = new;
    n--;
  }
  traversal(header);
  return header;
}