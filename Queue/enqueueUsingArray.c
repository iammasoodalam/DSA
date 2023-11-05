#include "structureQueueUsingArray.h"

void enqueue(int element)
{
  if (queue.rear == MAX_SIZE)
  {
    printf("Queue is full...\n");
    return;
  }

  if (queue.front == -1)
  {
    queue.front = 0;
  }

  queue.rear = queue.rear + 1;
  queue.array[queue.rear] = element;
}
