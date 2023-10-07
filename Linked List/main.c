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

int main()
{
  printf("----Performing simple tasks in Linked list----\n");

  printf("Create a list and traverse it...\n");
  node *list = createListLL(); 
  traversalLL(list);

  printf("\nInsert nodes at the beginning of the Linked list...\n");
  list = insertAtBeginningLL(list);
  traversalLL(list);

  printf("\nInsert nodes at the end of the Linked list...\n");
  list = insertAtEndLL(list);
  traversalLL(list);

  printf("\nInsert nodes at any position of the Linked list...\n");
  list = insertAtAnyPositionLL(list);
  traversalLL(list);

  printf("\nDelete nodes at the beginning of the Linked list...\n");
  list = deleteAtBeginningLL(list);
  traversalLL(list);

  printf("\nDelete nodes at the end of the Linked list...\n");
  list = deleteAtEndLL(list);
  traversalLL(list);

  printf("\nDelete nodes at any position of the Linked list...\n");
  list = deleteAtAnyPositionLL(list);
  traversalLL(list);

  int nodes = nodeCount(list);
  printf("\nThe number of nodes right now in the linked list is %d", nodes);

  printf("\nSearch a node in the linked list...\n");
  searchANodeLL(list);

  printf("\nReversal of a linked list...\n");
  list = reversalLL(list);
  traversalLL(list);

  return 0;
}