#include "structureQueueUsingArray.h"

void enqueue(int element)
{
  if ((queue.rear % MAX_SIZE) + 1 == queue.front)
  {
    printf("Queue is full...\n");
    return;
  }

  if (queue.front == -1)
  {
    queue.front = 0;
  }

  queue.rear = (queue.rear + 1) % MAX_SIZE;
  queue.array[queue.rear] = element;
}
