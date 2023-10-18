#include <stdio.h>
#include <stdlib.h>
#include "stackStructureArray.h"
#include "stackPushArray.c"
#include "stackPopArray.c"
#include "stackTraverseArray.c"

int main()
{
    Stack myArr;
    myArr.data = (int *)malloc(STACK_SIZE * sizeof(int));
    myArr.top = -1;
    myArr = push(myArr, 5);
    myArr = push(myArr, 8);
    myArr = push(myArr, 10);
    myArr = pop(myArr).newStack;
    myArr = push(myArr, 15);
    myArr = pop(myArr).newStack;
    myArr = pop(myArr).newStack;
    myArr = push(myArr, 18);
    myArr = push(myArr, 2);
    myArr = pop(myArr).newStack;
    myArr = push(myArr, 76);
    myArr = pop(myArr).newStack;
    myArr = pop(myArr).newStack;

    traverse(myArr);
}
