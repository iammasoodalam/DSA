#include <stdio.h>
#include "Arrays/run.c"
#include "Linked List/run.c"
#include "Matrix/run.c"
#include "Doubly Linked List/run.c"
#include "Circular Linked List/run.c"
#include "Miscelleneous/addPolynomials.c"

int main()
{
    int operation;
    char continueMain; // continue
    
    RESTART:
    printf("1. Arrays\n");
    printf("2. Matrix\n");
    printf("3. Linked List\n");
    printf("4. Doubly Linked List\n");
    printf("5. Circular Linked List\n");
    printf("6. Add two Polynomials using linked list\n");

    CHOOSE_OPERATION:
    printf("\nChoose an operation from above: ");
    scanf("%d", &operation);

    switch (operation)
    {
    case 1:
        arrays();
        break;
    
    case 2:
        matrix();
        break;

    case 3:
        linkedList();
        break;

    case 4:
        doublyLinkedList();
        break;

    case 5:
        CircularLinkedList();
        break;

    case 6:
        addPolynomialsMain();
        break;

    default:
        printf("Please enter a valid value..\n ");
        goto CHOOSE_OPERATION;
        break;
    }

    ASK_REDO:
    printf("Do you want to continue with another Data Structure...\n");
    printf("Enter Y for yes and N for No: ");
    getchar();
    scanf("%c", &continueMain);
    continueMain = (char)toupper(continueMain);

    if (continueMain == 89) // 89 is equivalent to Y
    {
        goto RESTART;
    }
    else if (continueMain == 78) // 78 is equivalent to N
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