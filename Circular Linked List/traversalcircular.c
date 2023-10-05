#include <stdio.h>
#include "circularnode.h"

void traversalCLL(circularnode *header)
{
  circularnode *p;
  p = header->next;
  while (p != header)
  {
    printf("%d \t", p->data);
    p = p->next;
  }
  printf("\n");
}