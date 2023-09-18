#ifndef DOUBLY_NODE_FILE
#define DOUBLY_NODE_FILE

typedef struct doublynode
{
  int data;
  struct doublynode *previous;
  struct doublynode *next;
} doublynode;

#endif