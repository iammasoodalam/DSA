#include "stackStructureLL.h"

void push(int data)
{
  Node *new = (Node *)malloc(sizeof(Node));
  new->link = stack.top;
  new->data = data;
  stack.top = new;
  stack.head->link = new;
}