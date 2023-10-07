#include <stdio.h>
#include <stdlib.h>
#include "data.h"

Array createArray(int size){
    Array array;
    array.size = size;
    array.array = (int *)malloc(size * sizeof(int));
    for (int i = 0; i < size; i++){
        printf("Enter the data for postion %d: ", i + 1);
        scanf("%d", &array.array[i]);
    }
    return array;
}