#include <stdio.h>
#include "stackStructureArray.h"

/**
 * This will pop the top element from the stack
 * @returns - an struct datatype with a stack and the top element
 */
PopReturns pop(Stack stack)
{
    PopReturns data;
    if (stack.top == -1)
    {
        printf("Stack empty...\n");
        data.newStack = stack;
        data.element = 0;
        return data;
    }
    else
    {
        stack.top--;
        data.newStack = stack;
        data.element = stack.data[stack.top + 1];
        return data;
    }
}