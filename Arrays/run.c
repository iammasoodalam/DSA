#include <stdio.h>
#include <stdlib.h>
#include "data.h"
#include "createarray.c"
#include "traverse.c"
#include "insertatbeginning.c"
#include "insertatend.c"
#include "insertatanyposition.c"
#include "deleteatend.c"
#include "deleteatbeginning.c"
#include "deleteatanyposition.c"
#include "deleteanode.c"

int main(){
    Array data;
    printf("Enter the size of your array: ");
    scanf("%d", &data.size);
    data.array = createArray(data.size);
    traverse(data);
    Array new = deleteANode(data);
    traverse(new);
    // A simple change using spck
    return 0;
}