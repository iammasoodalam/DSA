#include <stdio.h>
#include "circularnode.h"

circularnode *insertAtEndCLL(circularnode *header)
{
  circularnode *ptr;
  int n; // number of nodes to be inserted
  printf("Enter the number of nodes to be inserted: ");
  scanf("%d", &n);

  // setting a pointer at the end of the linked list.
  ptr = header->next;
  while (ptr->next != header)
  {
    ptr = ptr->next;
  }

  while (n != 0)
  {
    circularnode *new = (circularnode *)malloc(sizeof(circularnode));
    if (new == NULL)
    {
      printf("Memory insufficient...\n\n");
      return header;
    }
    printf("Enter the data for the new node: ");
    scanf("%d", &new->data);
    new->next = header;
    ptr->next = new;
    ptr = new;
    n--;
  }
  return header;
}