#include <stdio.h>
#include "stackStructureLL.h"

int pop()
{
  if (stack.top == NULL)
  {
    printf("Stack is empty...\n");
    return 0;
  }
  int element = stack.top->data;
  stack.top = stack.top->link;
  stack.head->link = stack.top;
  return element;
}