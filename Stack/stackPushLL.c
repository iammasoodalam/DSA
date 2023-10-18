#include <stdlib.h>
#include "stackStructureLL.h"

Stack push(Stack stack, int data)
{
    Node *new = (Node *)malloc(sizeof(Node));
    new->link = stack.top;
    new->data = data;
    stack.top = new;
    stack.head->link = new;
    return stack;
}