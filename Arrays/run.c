#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "data.h"
#include "createarray.c"
#include "traverse.c"
#include "insertatbeginning.c"
#include "insertatend.c"
#include "insertatanyposition.c"
#include "deleteatend.c"
#include "deleteatbeginning.c"
#include "deleteatanyposition.c"
#include "deleteanode.c"

int arrays()
{
  int operation;
  char cont; // continue
RESTART:
  printf("1. Create an array and traverse.\n");
  printf("2. Insert at beginning of the given array.\n");
  printf("3. Insert at the end of the given array.\n");
  printf("4. Insert at any position of the given array.\n");
  printf("5. Delete at the beginning of the given array.\n");
  printf("6. Delete at the end of the given array.\n");
  printf("7. Delete at any position of the given array.\n");
  printf("8. Delete a node from the given array.\n");

CHOOSE_OPERATION:
  printf("Choose any operation provided above: ");
  scanf("%d", &operation);
  
  Array array;
  if (operation != 1)
  {
    printf("\nCreate your list before doing an operation...\n");
    printf("Enter the size of your array: ");
    scanf("%d", &array.size);
    array.array = createArray(array.size);
    traverse(array);
  }

  switch (operation)
  {
  case 1:
    Array array1;
    printf("Enter the size of your array: ");
    scanf("%d", &array1.size);
    array1.array = createArray(array1.size);
    traverse(array1);
    break;
  case 2:
    array = insertAtBeginning(array);
    traverse(array);
    break;
  case 3:
    array = insertAtEnd(array);
    traverse(array);
    break;
  case 4:
    array = insertAtAnyPosition(array);
    traverse(array);
    break;
  case 5:
    array = deleteAtBeginning(array);
    traverse(array);
    break;
  case 6:
    array = deleteAtEnd(array);
    traverse(array);
    break;
  case 7:
    array = deleteAtAnyPosition(array);
    traverse(array);
    break;
  case 8:
    array = deleteANode(array);
    traverse(array);
    break;
  
  default:
    printf("Please enter a valid value..\n ");
    goto CHOOSE_OPERATION;
    break;
  }

ASK_REDO:
  printf("Do you want to continue in Arrays...\n");
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