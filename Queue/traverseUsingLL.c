#include <stdio.h>
#include "structureQueueUsingLL.h"

void traverse()
{
  if (queue.front == NULL)
  {
    printf("Queue is empty...\n");
    return;
  }

  Node *ptr = queue.front;

  while (ptr != NULL)
  {
    printf("\t%d", ptr->data);
    ptr = ptr->link;
  }
  printf("\n");
}