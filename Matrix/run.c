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
    int operation; 
    char cont; // continue
    Matrix *mat1, *mat2, *matrix;

    RESTART:
    printf("1. Create a matrix and traverse it only.\n");
    printf("2. Add two matrices.\n");
    printf("3. Subtract a matrix from another.\n");
    printf("4. Multiply two matrices.\n");
    printf("5. Transpose of a matrix.\n");

    CHOOSE_OPERATION:
    printf("Enter the number of an operation provided above: ");
    scanf("%d", &operation);

    if(operation < 5 && operation > 1){
        mat1 = createMatrix();
        traversal(mat1);
        mat2 = createMatrix();
        traversal(mat2);
    } else if (operation == 1 || operation == 5){
        matrix = createMatrix();
        traversal(matrix);
    }

    switch (operation)
    {
    case 1:
        break;
    case 2:
        Matrix *sum = addingMatrices(mat1, mat2);
        printf("\nResultant matrix...");
        traversal(sum);
        break;
    case 3: 
        Matrix *difference = subtractMatrix(mat1, mat2);
        printf("\nResultant matrix...");
        traversal(difference);
        break;
    case 4: 
        Matrix *crossMultiple = muliplyMatrices(mat1, mat2);
        printf("\nResultant matrix...");
        traversal(crossMultiple);
        break;
    case 5: 
        Matrix *transpose = transposeMatrix(matrix);
        printf("\n");
        traversal(transpose);
        break;
    default:
        printf("Please choose a number carefully...\n\n ");
        goto CHOOSE_OPERATION;
        break;
    }

    ASK_REDO:
    printf("Do you want to continue...\n");
    printf("Enter Y for yes and N for No: ");
    getchar();
    scanf("%c", &cont);
    cont = (char)toupper(cont);

    if (cont == 89) // 89 is equivalent to Y
    {
        goto RESTART;
    }
    else if (cont == 78) // 78 is equivalent to N
    {
        return 0;
    }
    else
    {
        printf("Please read carefully...\n\n");
        goto ASK_REDO;
    }

    return 0;
}