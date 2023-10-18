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

typedef struct popreturn
{
    Stack newStack;
    Node *element;
} PopReturn;

#endif