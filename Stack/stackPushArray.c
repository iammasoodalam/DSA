#include <stdio.h>
#include "stackStructureArray.h"

Stack push(Stack stack, int data)
{
    if (stack.top == STACK_SIZE - 1)
    {
        printf("Stack full...\n");
        return stack;
    }
    else
    {
        stack.top++;
        stack.data[stack.top] = data;
        return stack;
    }
}