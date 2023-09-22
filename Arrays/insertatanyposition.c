#include <stdio.h>
#include "data.h"

Array insertAtAnyPosition(Array data){
    int sizeOfNewNodes, newNumber, position;

    printf("Enter the number of nodes you want to enter: ");
    scanf("%d", &sizeOfNewNodes);
    printf("Enter the position of new node: ");
    scanf("%d", &position);

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
        data.array[position] = newNumber;
        position++;
        data.size++;
    }

    return data;
}