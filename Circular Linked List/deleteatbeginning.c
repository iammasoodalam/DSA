#include <stdio.h>
#include "circularnode.h"

circularnode *deleteAtBeginning(circularnode *header)
{
  circularnode *ptr = header->next;

  if (ptr == NULL)
  {
    printf("List is already empty...\nOperation isn't possible.");
    return header;
  }

  header->next = ptr->next;
  free(ptr);
  return header;
}