#include <stdio.h>
#include <stdlib.h>
#include "stackStructureArray.h"
#include "stackPushArray.c"
#include "stackPopArray.c"
#include "stackTraverseArray.c"

int main()
{
  stack.top = -1;
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
}