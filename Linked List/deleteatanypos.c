#include <stdio.h>
#include "node.h"
#include "nodecount.h"

node *deleteAtAnyPositionLL(node *header)
{
  node *ptr = header->link, *ptr1;
  int position;
  int tolalNodes = nodeCount(header);

  if (ptr == NULL)
  {
    printf("List is already empty...\nOperation isn't possible.");
    return header;
  }

  printf("Enter the position of the node to be deleted: ");
  scanf("%d", &position);

  if (position < 1 || position > tolalNodes)
  {
    printf("Not possible to delete...\n");
    return header;
  }
  for (int i = 1; i < position; i++)
  {
    ptr1 = ptr;
    ptr = ptr->link;
  }
  ptr1->link = ptr->link;
  free(ptr);
  return header;
}