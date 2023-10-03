#include <stdio.h>
#include <stdlib.h>
#include "matstructure.h"

Matrix *createMatrix(){
    int rows, cols;

    printf("Enter the rows in the matrix: ");
    scanf("%d", &rows);
    printf("Enter the columns in the matrix: ");
    scanf("%d", &cols);

    // defining matrix with user input rows and cols.
    Matrix *matrix = (Matrix *) malloc(sizeof(Matrix));

    matrix->rows = rows;
    matrix->columns = cols;
    matrix->data = (int **)malloc(rows * sizeof(int *));
    for(int i = 0; i < rows; i++){
        matrix->data[i] = (int *)malloc(cols * sizeof(int));
    }
    for(int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            printf("Enter the element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix->data[i][j]);
        }
    }

    return matrix;
}
