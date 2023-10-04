#include <stdio.h>
#include <stdlib.h>
#include "matstructure.h"

Matrix *muliplyMatrices(Matrix *matrixOne, Matrix *matrixTwo){
    if(matrixOne->columns != matrixTwo->rows){
        printf("Multiplication of above matrices is not possible...\nAs columns of first matrix is not equal to rows of second matrix.\n\n");
        return 0;
    } 
    Matrix *matFinal = (Matrix *)malloc(sizeof(Matrix));

    matFinal->rows = matrixOne->rows;
    matFinal->columns = matrixTwo->columns;
    matFinal->data = (int **)malloc(matFinal->rows *sizeof(int *));
    for(int i = 0; i < matFinal->rows; i++){
        matFinal->data[i] = (int *)malloc(matFinal->columns * sizeof(int));
    }
    for(int i = 0; i < matrixOne->rows; i++){
        for (int j = 0; j < matrixTwo->columns; j++){
            matFinal->data[i][j] = 0;
            for (int k = 0; k < matrixTwo->rows; k++){
                matFinal->data[i][j] += matrixOne->data[i][k] * matrixTwo->data[k][j];
            }
        }
    }
    return matFinal;
}