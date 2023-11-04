#include "stackStructureArray.h"

double pop()
{
  if (stack.top == -1)
  {
    printf("Stack is already empty 😒. \n");
    return 0;
  }
  return stack.array[stack.top--];
}