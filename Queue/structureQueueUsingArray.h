#ifndef QUEUE_USING_ARRAY
#define QUEUE_USING_ARRAY
#define MAX_SIZE 50

typedef struct queue
{
  int array[MAX_SIZE];
  int front;
  int rear;
} Queue;

Queue queue;
#endif