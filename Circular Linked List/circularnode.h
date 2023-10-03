#ifndef CIRCULARNODE
#define CIRCULARNODE

typedef struct circularnode{
    int data;
    struct circularnode *previous;
    struct circularnode *next;
} circularnode;

#endif