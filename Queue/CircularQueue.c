#include <stdio.h>
#include "CircularEnqueue.c"
#include "CircularDequeue.c"
#include "CircularTraverse.c"

int main()
{
  queue.front = queue.rear = -1;
  enqueue(23);
  dequeue();
  enqueue(61);
  enqueue(8);
  dequeue();
  enqueue(10);
  enqueue(96);
  dequeue();

  traverse();

  return 0;
}