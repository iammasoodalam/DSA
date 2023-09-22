#include <stdio.h>
#include "data.h"

int searchANode(Array data){
    int node;
    printf("Enter the node data to search: ");
    scanf("%d", &node);
    
    for (int i = 0; i < data.size; i++){
        if(data.array[i] == node){
            return i + 1;
        }
    }
    return -1;
}