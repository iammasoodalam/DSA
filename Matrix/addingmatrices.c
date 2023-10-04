#include <stdio.h>
#include <stdlib.h>
#include "matstructure.h"

Matrix *addingMatrices(Matrix *matrixOne, Matrix *matrixTwo){
    if(matrixOne->rows != matrixTwo->rows || matrixOne->columns != matrixTwo->columns){
        printf("Addition can't be possible...\nRows and columns of both matrix should be same.\n\n");
        return 0;
    } 
    Matrix *sum = (Matrix *)malloc(sizeof(Matrix));

    sum->rows = matrixOne->rows;
    sum->columns = matrixOne->columns;
    sum->data = (int **)malloc(sum->rows *sizeof(int *));
    for(int i = 0; i < sum->rows; i++){
        sum->data[i] = (int *)malloc(sum->columns * sizeof(int));
    }
    for(int i = 0; i < sum->rows; i++){
        for (int j = 0; j < sum->columns; j++){
            sum->data[i][j] = matrixOne->data[i][j] + matrixTwo->data[i][j];
        }
    }
    return sum;
}