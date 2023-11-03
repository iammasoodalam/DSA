#ifndef STACK_STRUCTURE_LL
#define STACK_STRUCTURE_LL

typedef struct node
{
  int data;
  struct node *link;
} Node;

typedef struct stack
{
  Node *head;
  Node *top;
} Stack;

Stack stack; // creating a stack at global scope

#endif