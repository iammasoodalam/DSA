#include <stdio.h>
#include "matstructure.h"

void traversal(Matrix *mat){
    for(int i = 0; i < mat->rows; i++){
        for (int j = 0; j < mat->columns; j++){
            printf("\t%d", mat->data[i][j]);
        }
        printf("\n");
    }
}