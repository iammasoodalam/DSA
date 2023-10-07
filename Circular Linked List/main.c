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

int main()
{
  
  printf("----Performing simple tasks in Circular linked list----\n");

  printf("Create a list and traverse it...\n");
  circularnode *list = createCLL(); 
  traversalCLL(list);

  printf("\nInsert nodes at the beginning of the circular linked list...\n");
  list = insertAtBeginningCLL(list);
  traversalCLL(list);

  printf("\nInsert nodes at the end of the circular linked list...\n");
  list = insertAtEndCLL(list);
  traversalCLL(list);

  printf("\nInsert nodes at any position of the circular linked list...\n");
  list = insertAtAnyPositionCLL(list);
  traversalCLL(list);

  printf("\nDelete nodes at the beginning of the circular linked list...\n");
  list = deleteAtBeginningCLL(list);
  traversalCLL(list);

  printf("\nDelete nodes at the end of the circular linked list...\n");
  list = deleteAtEndCLL(list);
  traversalCLL(list);

  printf("\nDelete nodes at any position of the circular linked list...\n");
  list = deleteAtAnyPositionCLL(list);
  traversalCLL(list);


  return 0;
}