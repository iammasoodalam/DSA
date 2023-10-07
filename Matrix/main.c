#include <stdio.h>
#include <ctype.h>
#include "matstructure.h"
#include "createMatrix.c"
#include "traversalMatrix.c"
#include "addingmatrices.c"
#include "subtractmatrix.c"
#include "multiplymatrices.c"
#include "transposematrix.c"

int main(){
    printf("-----Doing basic operations on Matrices-----\n");
    
    printf("\nCreating a matrix and traversing it...\n");
    Matrix *matrixOne = createMatrix(); 
    printf("(1)\n");
    traversal(matrixOne);

    printf("\nAdding two Matrices...\n");
    printf("Please create a second matrix for addition:\n");
    Matrix *matrixTwo = createMatrix();
    printf("(2)\n");
    traversal(matrixTwo);
    
    printf("The resultant matrix of the addition is: \n");
    Matrix *final = addingMatrices(matrixOne, matrixTwo);
    traversal(final);

    printf("\nSubtracting (2) Matrix from (1)...\n");
    printf("The resultant matrix of the subtraction is: \n");
    final = subtractMatrix(matrixOne, matrixTwo);
    traversal(final);

    printf("\nMultiplying two matrices...\n");
    printf("Please create a new matrix two multiply with last result:\n");
    Matrix *matrixThree = createMatrix();
    printf("The resultant matrix of the multiplication is: \n");
    final = muliplyMatrices(final, matrixThree);
    traversal(final);    
    
    printf("\nTranspoing the final matrix...\n");
    final = transposeMatrix(final);
    traversal(final);

    return 0;
}