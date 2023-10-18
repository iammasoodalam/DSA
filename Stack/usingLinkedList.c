#include <stdio.h>
#include <stdlib.h>
#include "stackStructureLL.h"
#include "stackPushLL.c"
#include "stackPopLL.c"
#include "stackTraverseLL.c"

int main()
{
    Stack myList;

    // initializing the list with head and top = NULL.
    myList.head = (Node *)malloc(sizeof(Node *));
    myList.head->data = 0;
    myList.head->link = NULL;
    myList.top = NULL;

    myList = push(myList, 5);
    myList = push(myList, 8);
    myList = push(myList, 10);
    myList = pop(myList).newStack;
    myList = push(myList, 15);
    myList = pop(myList).newStack;
    myList = pop(myList).newStack;
    myList = push(myList, 18);
    myList = push(myList, 2);
    myList = pop(myList).newStack;
    myList = push(myList, 76);
    myList = pop(myList).newStack;
    myList = pop(myList).newStack;

    traverse(myList);
    return 0;
}