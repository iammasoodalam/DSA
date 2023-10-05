#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> // for using toupper()... this will change a character to uppercase.
#include "doublynode.h"
#include "createdoubly.c"
#include "traversaldoubly.c"
#include "insertatbeginning.c"
#include "insertatend.c"
#include "insertatanypos.c"
#include "deleteatend.c"
#include "deleteatbeginning.c"
#include "deleteatanypos.c"

int doublyLinkedList()
{
  int operation; // operation type
  char cont; // continue

  RESTART:
  printf("1. Create a list.\n");
  printf("2. Insert at beginning of a doubly linked list.\n");
  printf("3. Insert at the end of a doubly linked list.\n");
  printf("4. Insert at any position of a doubly linked list.\n");
  printf("5. Delete at the beginning of a doubly linked list.\n");
  printf("6. Delete at the end of a doubly linked list.\n");
  printf("7. Delete at any position of a doubly linked list.\n");
  printf("8. Calculate the node count of a doubly linked list.\n");

  CHOOSE_OPERATION:
  printf("\nChoose any operation provided above: ");
  scanf("%d", &operation);

  doublynode *list;
  doublynode *list1;


  if (operation != 1)
  {
    printf("\nCreate your list before doing an operation...\n");
    list = createDoubly();
    doublyTraversal(list);
  }

  switch (operation)
  {
  case 1:
    list1 = createDoubly();
    doublyTraversal(list1);
    break;
  case 2:
    list = insertAtBeginningDLL(list);
    doublyTraversal(list);
    break;
  case 3:
    list = insertAtEndDLL(list);
    doublyTraversal(list);
    break;
  case 4:
    list = insertAtAnyPositionDLL(list);
    doublyTraversal(list);
    break;
  case 5:
    list = deleteAtBeginningDLL(list);
    doublyTraversal(list);
    break;
  case 6:
    list = deleteAtEndDLL(list);
    doublyTraversal(list);
    break;
  case 7:
    list = deleteAtAnyPositionDLL(list);
    doublyTraversal(list);
    break;
  default:
    printf("Please enter a valid value..\n ");
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