#include <stdio.h>
#include "doublynode.h"

void doublyTraversal(doublynode *header)
{
  doublynode *p;
  p = header->next;

  while (p != NULL)
  {
    printf("%d \t", p->data);
    p = p->next;
  }
  printf("\n");
}