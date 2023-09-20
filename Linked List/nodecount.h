#ifndef NODE_COUNT
#define NODE_COUNT
#include "node.h"

int nodeCount(node *header)
{
  node *ptr = header;
  int count = 0;
  while (ptr->link != (void *)0)
  // (void *)0 => this is NULL equivalent, I'm just typecasting 0 to NULL
  {
    count++;
    ptr = ptr->link;
  }
  return count;
}

#endif