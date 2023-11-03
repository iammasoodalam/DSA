#include <stdio.h>
#include "stackStructureLL.h"

void traverse(Stack stack)
{
  if (stack.top == NULL)
  {
    printf("Stack is empty...\n");
    return;
  }
  Node *ptr = stack.top;
  while (ptr != NULL)
  {
    printf("\t%d", ptr->data);
    ptr = ptr->link;
  }
  printf("\n");
}