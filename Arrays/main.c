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

int main()
{
  int size;
  printf("--------Operations on Arrays--------\n\n");
  printf("Create an array to perform the operations on arrays...\n");
  printf("Enter the size of the array: ");
  scanf("%d", &size);

  Array array = createArray(size);
  printf("\nInitial Array created...\n");
  traverse(array);

  printf("\nInserting a data at the end of the \"Array\"...\n");
  array = insertAtEnd(array);
  traverse(array);

  printf("\nInserting a data at the beginning of the \"Array\"...\n");
  array = insertAtBeginning(array);
  traverse(array);

  printf("\nInserting a data at any postition of the \"Array\"...\n");
  array = insertAtAnyPosition(array);
  traverse(array);

  printf("\nDeleing a data at the end of the \"Array\"...\n");
  array = deleteAtEnd(array);
  traverse(array);

  printf("\nDeleing a data at the beginning of the \"Array\"...\n");
  array = deleteAtBeginning(array);
  traverse(array);

  printf("\nDeleing a data at any position of the \"Array\"...\n");
  array = deleteAtAnyPosition(array);
  traverse(array);

  printf("\nSearch and delete a data from the \"Array\"...\n");
  array = deleteANode(array);
  traverse(array);

  return 0;
}