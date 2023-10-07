#include <stdio.h>
#include "node.h"

node *createListLL()
{
  node *header, *p, *new;
  int n, i = 1;

  header = (node *)malloc(sizeof(node));
  header->data = 0; /* it should be (void *)0 means NULL
  but using NULL will create a warning for using int* in place of int.*/
  header->link = NULL;
  p = header;

  printf("Enter the number of nodes you want to enter: ");
  scanf("%d", &n);

  while (n != 0)
  {
    new = (node *)malloc(sizeof(node));
    printf("Enter the data for node %d: ", i);
    scanf("%d", &new->data);
    new->link = NULL;
    p->link = new;
    p = new;
    i++, n--;
  }

  return header;
}
