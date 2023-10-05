#include <stdio.h>
#include "node.h"

node *deleteAtBeginningLL(node *header)
{
  node *ptr = header->link;

  if (ptr == NULL)
  {
    printf("List is already empty...\nOperation isn't possible.");
    return header;
  }

  header->link = ptr->link;
  free(ptr);
  return header;
}