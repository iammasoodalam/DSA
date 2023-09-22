#include <stdio.h>
#include "data.h"

Array insertAtEnd(Array data){
    int sizeOfNewNodes, newNumber;

    printf("Enter the number of nodes you want to enter: ");
    scanf("%d", &sizeOfNewNodes);

    for(int i = 0; i < sizeOfNewNodes; i++){
        if(data.size >= ARRAY_SIZE){
            printf("Insertion is not possible...\n");
            return data;
        }

        printf("Enter the new node: ");
        scanf("%d", &newNumber);

        data.array[data.size] = newNumber;
        data.size++;
    }

    return data;
}