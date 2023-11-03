#include <stdio.h>
#include <stdlib.h>
#include "stackStructureLL.h"
#include "stackPushLL.c"
#include "stackPopLL.c"
#include "stackTraverseLL.c"

int main()
{
  // initializing the list with head and top = NULL.
  stack.head = (Node *)malloc(sizeof(Node *));
  stack.head->data = 0;
  stack.head->link = NULL;
  stack.top = NULL;

  push(5);
  push(8);
  push(10);
  pop();
  push(15);
  pop();
  pop();
  push(18);
  push(2);
  pop();
  push(76);
  pop();
  pop();

  traverse(stack);
  return 0;
}