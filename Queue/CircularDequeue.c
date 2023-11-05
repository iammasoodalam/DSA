#include "structureQueueUsingArray.h"

int dequeue()
{
  int element;
  if (queue.front == queue.rear == -1)
  {
    printf("Queue is already empty...\n");
    return 0;
  }

  element = queue.array[queue.front];

  if (queue.front == queue.rear)
  {
    queue.front = queue.rear = -1;
    return element;
  }
  queue.front = (queue.front + 1) % MAX_SIZE;
  return element;
}