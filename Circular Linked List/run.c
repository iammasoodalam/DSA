#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "circularnode.h"
#include "createcircularlist.c"
#include "traversalcircular.c"
#include "insertatbeginning.c"
#include "insertatend.c"
#include "insertatanypos.c"
#include "deleteatbeginning.c"
#include "deleteatend.c"
#include "deleteatanypos.c"

int CircularLinkedList()
{
  int operation;
  char cont; // continue
RESTART:
  printf("1. Create a list and traverse it.\n");
  printf("2. Insert at beginning of the given circular linked list.\n");
  printf("3. Insert at the end of the given circular linked list.\n");
  printf("4. Insert at any position of the given circular linked list.\n");
  printf("5. Delete at the beginning of the given circular linked list.\n");
  printf("6. Delete at the end of the given circular linked list.\n");
  printf("7. Delete at any position of the given circular linked list.\n");


CHOOSE_OPERATION:
  printf("Choose any operation provided above: ");
  scanf("%d", &operation);
  
  printf("\nPlease create a list: \n");
  circularnode *list = createCLL();
  traversalCLL(list);

  switch (operation)
  {
  case 1:
    break;
  case 2:
    list = insertAtBeginningCLL(list);
    traversalCLL(list);
    break;
  case 3:
    list = insertAtEndCLL(list);
    traversalCLL(list);
    break;
  case 4:
    list = insertAtAnyPositionCLL(list);
    traversalCLL(list);
    break;
  case 5:
    list = deleteAtBeginningCLL(list);
    traversalCLL(list);
    break;
  case 6:
    list = deleteAtEndCLL(list);
    traversalCLL(list);
    break;
  case 7:
    list = deleteAtAnyPositionCLL(list);
    traversalCLL(list);
    break;

  default:
    printf("Please enter a valid value...\n ");
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