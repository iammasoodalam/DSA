#include "stackStructureArray.h"

void traverse(Stack stack)
{
  if (stack.top == -1)
  {
    printf("Stack is empty...\n");
  }
  else
  {
    int i = 0;
    while (i <= stack.top)
    {
      printf("\t%f", stack.array[i]);
      i++;
    }
    printf("\n");
  }
}