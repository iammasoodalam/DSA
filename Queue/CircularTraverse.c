#include <stdio.h>
#include "structureQueueUsingArray.h"

void traverse()
{
  if (queue.front == -1)
  {
    printf("Queue is empty...\n");
    return;
  }

  int i = queue.front;
  while (i != queue.rear)
  {
    printf("\t%d", queue.array[i]);
    i = (i + 1) % MAX_SIZE;
  }
  printf("\t%d\n", queue.array[i]);

  printf("\n");
}