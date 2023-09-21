#include <stdio.h>
#include <stdlib.h>
#include "doublynode.h"
#include "createdoubly.c"
#include "traversaldoubly.c"
#include "insertatbeginning.c"
#include "insertatend.c"
#include "insertatanypos.c"
#include "deleteatend.c"
#include "deleteatbeginning.c"
#include "deleteatanypos.c"

void main()
{

  doublynode *list1 = createDoubly();
  deleteAtAnyPosition(list1);
}