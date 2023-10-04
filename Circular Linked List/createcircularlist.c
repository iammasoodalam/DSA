#include <stdio.h>
#include "circularnode.h"

circularnode *createList()
{
  circularnode *header, *p, *new;
  int n, i = 1;

  header = (circularnode *)malloc(sizeof(circularnode));
  header->data = 0; // it should be (void *)0 means NULL but that will create an error.
  header->next = NULL;
  p = header;

  printf("Enter the number of nodes you want to enter: ");
  scanf("%d", &n);

  while (n != 0)
  {
    new = (circularnode *)malloc(sizeof(circularnode));
    printf("Enter the data for node %d: ", i);
    scanf("%d", &new->data);
    new->next = header;
    p->next = new;
    p = new;
    i++, n--;
  }

  return header;
}
