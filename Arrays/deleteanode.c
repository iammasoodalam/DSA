#include <stdio.h>
#include "data.h"

Array deleteANode(Array data){
    int node, deletecount = 0;
    printf("Enter the node to delete: ");
    scanf("%d", &node);

    for (int i = 0, j = 0; i < data.size; i++, j++){
        if(data.array[i] == node){
            i++;
            deletecount++;
        }
        data.array[j] = data.array[i];
    }
    data.size = data.size - deletecount;
    return data;
}