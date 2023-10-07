#include <stdio.h>
#include "doublynode.h"
#include "createdoubly.c"
#include "traversaldoubly.c"
#include "insertatbeginning.c"
#include "insertatend.c"
#include "insertatanypos.c"
#include "deleteatend.c"
#include "deleteatbeginning.c"
#include "deleteatanypos.c"

int main()
{
  printf("----Performing simple tasks in Doubly linked list----\n");

  printf("Create a list and traverse it...\n");
  doublynode *list = createDoubly(); 
  doublyTraversal(list);

  printf("\nInsert nodes at the beginning of the Doubly linked list...\n");
  list = insertAtBeginningDLL(list);
  doublyTraversal(list);

  printf("\nInsert nodes at the end of the Doubly linked list...\n");
  list = insertAtEndDLL(list);
  doublyTraversal(list);

  printf("\nInsert nodes at any position of the Doubly linked list...\n");
  list = insertAtAnyPositionDLL(list);
  doublyTraversal(list);

  printf("\nDelete nodes at the beginning of the Doubly linked list...\n");
  list = deleteAtBeginningDLL(list);
  doublyTraversal(list);

  printf("\nDelete nodes at the end of the Doubly linked list...\n");
  list = deleteAtEndDLL(list);
  doublyTraversal(list);

  printf("\nDelete nodes at any position of the Doubly linked list...\n");
  list = deleteAtAnyPositionDLL(list);
  doublyTraversal(list);

  return 0;
}