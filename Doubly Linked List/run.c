#include <stdio.h>
#include <stdlib.h>
#include "doublynode.h"
#include "createdoubly.c"
#include "traversaldoubly.c"
#include "insertatbeginning.c"
#include "insertatend.c"
#include "insertatanypos.c"

void main()
{
  doublynode *list1 = createDoubly();
  insertAtAnyPosition(list1);
}