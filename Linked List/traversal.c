#include <stdio.h>
#include "node.h"

void traversal(node *header)
{
  node *p;
  p = header->link;
  while (p != NULL)
  {
    printf("%d \t", p->data);
    p = p->link;
  }
  printf("\n");
}