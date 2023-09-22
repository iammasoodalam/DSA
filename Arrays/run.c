#include <stdio.h>
#include <stdlib.h>
#include "data.h"
#include "createarray.c"
#include "traverse.c"
#include "insertatbeginning.c"
#include "insertatend.c"
#include "insertatanyposition.c"

int main(){
    Array data;
    printf("Enter the size of your array: ");
    scanf("%d", &data.size);
    data.array = createArray(data.size);
    traverse(data);
    Array new = insertAtBeginning(data);
    traverse(new);
    new = insertAtEnd(new);
    traverse(new);
    new = insertAtAnyPosition(new);
    traverse(new);
    return 0;
}