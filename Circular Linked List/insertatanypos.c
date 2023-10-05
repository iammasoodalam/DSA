#include <stdio.h>
#include "circularnode.h"

circularnode *insertAtAnyPositionCLL(circularnode *header)
{
  int n, position, count = 0; // n is number of nodes to be inserted.
  circularnode *p = header->next, *countPtr = header;
  printf("Enter the position of the new nodes: ");
  scanf("%d", &position);

  // Calculating the size of the list.
  if(countPtr->next != NULL) {
    while (countPtr->next != header){
        count++;
        countPtr = countPtr->next;
    }
  }
  // Checking if insert at position is possible
  if (position < 1 || position > count)
  {
    printf("Insert at %d is not possible...\n", position);
    return header;
  }

  printf("Enter the number of nodes to be inserted: ");
  scanf("%d", &n);

  for (int i = 1; i < position - 1; i++)
  {
    p = p->next;
  }
  while (n != 0)
  {
    circularnode *new = (circularnode *)malloc(sizeof(circularnode));
    if (new == NULL)
    {
      printf("Memory insufficient...\n\n");
      return header;
    }
    printf("Enter the data for the new circularnode: ");
    scanf("%d", &new->data);
    new->next = p->next;
    p->next = new;
    p = new;
    n--;
  }
  return header;
}