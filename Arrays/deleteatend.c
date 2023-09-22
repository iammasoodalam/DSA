#include "data.h"

Array deleteAtEnd(Array data){
    data.array[data.size - 1] = 0;
    data.size--;

    return data;
}