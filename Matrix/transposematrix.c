#include <stdlib.h>
#include "matstructure.h"

Matrix *transposeMatrix(Matrix *matrix){
    Matrix *matFinal = (Matrix *)malloc(sizeof(Matrix));

    matFinal->rows = matrix->columns;
    matFinal->columns = matrix->rows;
    matFinal->data = (int **)malloc(matFinal->rows *sizeof(int *));
    for(int i = 0; i < matFinal->rows; i++){
        matFinal->data[i] = (int *)malloc(matFinal->columns * sizeof(int));
    }

    for(int i = 0; i < matFinal->rows; i++){
        for (int j = 0; j < matFinal->columns; j++){
            matFinal->data[i][j] = matrix->data[j][i];
        }
    }
    return matFinal;
}