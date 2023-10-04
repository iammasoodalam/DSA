#ifndef CIRCULARNODE
#define CIRCULARNODE

typedef struct circularnode{
    int data;
    struct circularnode *next;
} circularnode;

#endif