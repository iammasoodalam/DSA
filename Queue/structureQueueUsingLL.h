#ifndef QUEUE_USING_LL
#define QUEUE_USING_LL

typedef struct node
{
  int data;
  struct node *link;
} Node;

typedef struct queue
{
  Node *front;
  Node *rear;
} Queue;

Queue queue; // creating a queue at global scope

#endif