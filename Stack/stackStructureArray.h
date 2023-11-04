#ifndef STACK_STRUCTURE_ARRAY
#define STACK_STRUCTURE_ARRAY

#define STACK_SIZE 100

typedef struct stack
{
  double array[STACK_SIZE];
  int top;
} Stack;

Stack stack; // creating a stack globally

#endif