#include <stdio.h>
#include "stackStructureLL.h"

PopReturn pop(Stack stack)
{
    PopReturn data;
    if (stack.top == NULL)
    {
        printf("Stack is empty...\n");
        data.element = NULL;
        data.newStack = stack;
        return data;
    }
    else
    {
        data.element = stack.top;
        stack.top = stack.top->link;
        stack.head->link = stack.top;
        data.newStack = stack;
        return data;
    }
}