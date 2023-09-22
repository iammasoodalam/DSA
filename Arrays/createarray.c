#include <stdio.h>
#include <stdlib.h>
#include "data.h"

int *createArray(int size){
    // If I allocate memory size of 100, like `int array[100]`
    // it will be trashed just after my function call is completed.
    
    int* array = calloc(ARRAY_SIZE, sizeof(int));
    for (int i = 0; i < size; i++){
        printf("Enter the data for postion %d: ", i + 1);
        scanf("%d", &array[i]);
    }
    return array;
}