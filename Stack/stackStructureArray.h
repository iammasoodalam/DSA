#ifndef STACK_STRUCTURE_ARRAY
#define STACK_STRUCTURE_ARRAY

#ifndef STACK_SIZE
#define STACK_SIZE 100
#endif

typedef struct stack
{
    int *data;
    int top;
} Stack;

typedef struct popreturns
{
    Stack newStack;
    int element;
} PopReturns;

#endif