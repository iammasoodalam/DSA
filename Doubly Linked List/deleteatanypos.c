#include <stdio.h>
#include "doublynode.h"

doublynode *deleteAtAnyPosition(doublynode *header)
{
  int size = 0, position;
  doublynode *p = header->next, *ptr1, *ptr2;

  // Calculating the size of the list
  while (p != NULL)
  {
    size++;
    p = p->next;
  }
  // Reinitializing the pointer
  p = header->next;

  printf("Enter the position of the node to be deleted: ");
  scanf("%d", &position);

  // Checking if position is inside the list or not
  if (position < 0 || position > size)
  {
    printf("The node you want to delete is not possible...\n\n");
    return header;
  }
  for (int i = 1; i <= position; i++)
  {
    ptr1 = p;
    p = p->next;
    ptr2 = ptr1->previous;
  }
  ptr2->next = p;
  p->previous = ptr2;
  free(ptr1);
  doublyTraversal(header);
  return (header);
}