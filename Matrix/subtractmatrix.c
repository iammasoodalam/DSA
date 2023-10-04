#include <stdio.h>
#include <stdlib.h>
#include "matstructure.h"

Matrix *subtractMatrix(Matrix *matrixOne, Matrix *matrixTwo){
    if(matrixOne->rows != matrixTwo->rows || matrixOne->columns != matrixTwo->columns){
        printf("Subtraction can't be possible...\nRows and columns of both matrix should be same.\n\n");
        return 0;
    } 
    Matrix *matFinal = (Matrix *)malloc(sizeof(Matrix));

    matFinal->rows = matrixOne->rows;
    matFinal->columns = matrixOne->columns;
    matFinal->data = (int **)malloc(matFinal->rows *sizeof(int *));
    for(int i = 0; i < matFinal->rows; i++){
        matFinal->data[i] = (int *)malloc(matFinal->columns * sizeof(int));
    }
    for(int i = 0; i < matFinal->rows; i++){
        for (int j = 0; j < matFinal->columns; j++){
            matFinal->data[i][j] = matrixOne->data[i][j] - matrixTwo->data[i][j];
        }
    }
    return matFinal;
}