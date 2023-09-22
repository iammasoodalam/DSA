#include "data.h"

Array deleteAtBeginning(Array data){
    for(int i = 0; i < data.size - 1; i++){
        data.array[i] = data.array[i+1];
    }
    data.size--;

    return data;
}