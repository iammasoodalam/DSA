#include "stackStructureArray.h"

void push(double data)
{
  if (stack.top == STACK_SIZE - 1)
  {
    printf("Stack full...\n");
    return;
  }
  stack.array[++stack.top] = data;
}