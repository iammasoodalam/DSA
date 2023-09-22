#include <stdio.h>
#include "data.h"

Array deleteAtAnyPosition(Array data){
    int position;
    printf("Enter the position of the node to delete: ");
    scanf("%d", &position);

    if(position < 0 || position >= data.size){
        printf("You can't delete a data outside the array.\n");
        return data;
    }

    for (int i = 0, j = 0; i < data.size; i++, j++){
        if(i == position - 1){
            i++;
        }
        data.array[j] = data.array[i];
    }
    data.size--;
    return data;
}