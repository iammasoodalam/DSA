#include <stdio.h>
#include "node.h"

node *deleteAtEndLL(node *header)
{
  node *ptr = header->link;

  // check if link is empty or not.
  if (ptr == NULL)
  {
    printf("List is already empty...\n Delete operation is not possible.");
    return header;
  }
  node *ptr1 = ptr->link;

  while (ptr1->link != NULL)
  {
    ptr = ptr1;
    ptr1 = ptr1->link;
  }
  ptr->link = NULL;
  free(ptr1);

  return header;
}