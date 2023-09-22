#include <stdio.h>
#include "data.h"

void traverse(Array data){
    for (int i = 0; i < data.size; i++){
        printf("%d\t", data.array[i]);
    }
    printf("\n");
}