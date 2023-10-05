#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "node.h"
#include "createlist.c"
#include "traversal.c"
#include "insertatbeginning.c"
#include "insertatend.c"
#include "insertatanypos.c"
#include "deleteatbeginning.c"
#include "deleteatend.c"
#include "deleteatanypos.c"
#include "nodecount.h"
#include "searchanode.c"
#include "reversaloflinkedlist.c"
#include "mergeandsort.c"

int linkedList()
{
  int operation;
  char cont; // continue
RESTART:
  printf("1. Create a list.\n");
  printf("2. Insert at beginning of the given linked list.\n");
  printf("3. Insert at the end of the given linked list.\n");
  printf("4. Insert at any position of the given linked list.\n");
  printf("5. Delete at the beginning of the given linked list.\n");
  printf("6. Delete at the end of the given linked list.\n");
  printf("7. Delete at any position of the given linked list.\n");
  printf("8. Calculate the node count of the given linked list.\n");
  printf("9. Search a data in the given linked list.\n");
  printf("10. Reversal of the given linked list.\n");
  printf("11. Merge and sort two linked lists.\n\n");

CHOOSE_OPERATION:
  printf("Choose any operation provided above: ");
  scanf("%d", &operation);

  node *list;
  if (operation != 1)
  {
    printf("\nCreate your list before doing an operation...\n");
    list = createListLL();
    traversalLL(list);
  }

  switch (operation)
  {
  case 1:
    node *list1 = createListLL();
    traversalLL(list1);
    break;
  case 2:
    list = insertAtBeginningLL(list);
    traversalLL(list);
    break;
  case 3:
    list = insertAtEndLL(list);
    traversalLL(list);
    break;
  case 4:
    list = insertAtAnyPositionLL(list);
    traversalLL(list);
    break;
  case 5:
    list = deleteAtBeginningLL(list);
    traversalLL(list);
    break;
  case 6:
    list = deleteAtEndLL(list);
    traversalLL(list);
    break;
  case 7:
    list = deleteAtAnyPositionLL(list);
    traversalLL(list);
    break;
  case 8:
    int count = nodeCount(list);
    printf("There are total %d nodes.", count);
    break;
  case 9:
    searchANodeLL(list);
    break;
  case 10:
    list = reversalLL(list);
    traversalLL(list);
    break;
  case 11:
    node *list2 = createListLL();
    node *resultantList;
    resultantList = mergeAndSortLL(list, list2);
    traversalLL(resultantList);
    break;

  default:
    printf("Please enter a valid value..\n ");
    goto CHOOSE_OPERATION;
    break;
  }

ASK_REDO:
  printf("Do you want to continue in linked lists...\n");
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