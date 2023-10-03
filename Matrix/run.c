#include <stdio.h>
#include "matstructure.h"
#include "createMatrix.c"
#include "traversalMatrix.c"

int main(){
    Matrix *mat1 = createMatrix();
    traversal(mat1);
    return 0;
}