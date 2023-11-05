#include <stdio.h>
#include "structureQueueUsingLL.h"

int dequeue()
{
  if (queue.front == NULL)
  {
    printf("Queue is already empty...\n");
    return 0;
  }
  int element = queue.front->data;
  queue.front = queue.front->link;
  return element;
}