#include <stdio.h>
#include <stdlib.h>
#include "structureQueueUsingLL.h"
#include "enqueueUsingLL.c"
#include "dequeueUsingLL.c"
#include "traverseUsingLL.c"

int main()
{
  enqueue(45);
  enqueue(38);
  dequeue();
  enqueue(19);
  enqueue(61);
  enqueue(24);
  dequeue();

  traverse();

  return 0;
}