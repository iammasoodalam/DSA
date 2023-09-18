#include <stdio.h>
#include "node.h"

node *createList()
{
  node *header, *p, *new;
  int n;

  header = (node *)malloc(sizeof(node));
  header->data = NULL;
  header->link = NULL;
  p = header;

  printf("Enter the number of nodes you want to enter: ");
  scanf("%d", &n);

  while (n != 0)
  {
    int i = 1;
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
