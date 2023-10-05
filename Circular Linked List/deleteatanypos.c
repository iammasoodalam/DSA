#include <stdio.h>
#include "circularnode.h"

circularnode *deleteAtAnyPositionCLL(circularnode *header)
{
  circularnode *ptr = header->next, *ptr1, *countPtr = header;
  int position, count = 0;

  if (ptr == NULL)
  {
    printf("List is already empty...\nOperation isn't possible.");
    return header;
  } 
  else if(countPtr->next != header) {
    while (countPtr->next != header){
        count++;
        countPtr = countPtr->next;
    }
  }

  printf("Enter the position of the node to be deleted: ");
  scanf("%d", &position);

  if (position < 1 || position > count)
  {
    printf("Not possible to delete...\n");
    return header;
  }
  for (int i = 1; i < position; i++)
  {
    ptr1 = ptr;
    ptr = ptr->next;
  }
  ptr1->next = ptr->next;
  free(ptr);
  return header;
}