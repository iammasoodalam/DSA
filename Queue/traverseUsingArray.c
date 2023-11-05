#include "structureQueueUsingArray.h"

void traverse()
{
  if (queue.front == -1)
  {
    printf("Queue is empty...\n");
    return;
  }

  for (int i = queue.front; i <= queue.rear; i++)
  {
    printf("\t%d", queue.array[i]);
  }

  printf("\n");
}