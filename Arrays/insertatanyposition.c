#include <stdio.h>
#include "data.h"

Array insertAtAnyPosition(Array data){
    int sizeOfNewNodes, newNumber, position;

    printf("Enter the number of nodes you want to enter: ");
    scanf("%d", &sizeOfNewNodes);
    printf("Enter the position of new node: ");
    scanf("%d", &position);

    if(position < 1 || position > data.size){
        printf("Insertion at that position is not possible now...");
        return data;
    }

    for (int i = 0; i < sizeOfNewNodes; i++){
        if(data.size >= ARRAY_SIZE){
            printf("Insertion is not possible...\n");
            return data;
        }
        printf("Enter the new node: ");
        scanf("%d", &newNumber);
        for(int j = data.size; j >= position; j--){
            data.array[j] = data.array[j-1];
        }
        data.array[position - 1] = newNumber;
        position++;
        data.size++;
    }

    return data;
}