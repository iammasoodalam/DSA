#include <stdio.h>
#include "structureQueueUsingLL.h"

void enqueue(int element)
{
  Node *new = (Node *)malloc(sizeof(Node));
  new->data = element;
  new->link = NULL;

  if (queue.rear == NULL)
  {
    queue.front = new;
    queue.rear = new;
  }
  else
  {
    queue.rear->link = new;
    queue.rear = new;
  }
}