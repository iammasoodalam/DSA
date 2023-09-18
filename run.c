#include <stdio.h>
#include <stdlib.h>
#include "node.h"
#include "createlist.c"
#include "traversal.c"
#include "insertatbeginning.c"

int main()
{
  node *list1 = createList();
  insertAtBeginning(list1);
  return 0;
}