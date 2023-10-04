#include <stdio.h>
#include "circularnode.h"

circularnode *deleteAtEnd(circularnode *header)
{
  circularnode *ptr = header->next;

  // check if link is empty or not.
  if (ptr == NULL)
  {
    printf("List is already empty...\n Delete operation is not possible.");
    return header;
  }
  circularnode *ptr1 = ptr->next;

  while (ptr1->next != header)
  {
    ptr = ptr1;
    ptr1 = ptr1->next;
  }
  ptr->next = header;
  free(ptr1);

  return header;
}