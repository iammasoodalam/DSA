#include <stdio.h>
#include "doublynode.h"

doublynode *createDoubly()
{
  doublynode *header, *p, *new;
  int n, i = 1;

  header = (doublynode *)malloc(sizeof(doublynode));
  header->data = NULL;
  header->previous = NULL;
  header->next = NULL;
  p = header;

  printf("Enter the number of nodes you want to enter: ");
  scanf("%d", &n);

  while (n != 0)
  {
    new = (doublynode *)malloc(sizeof(doublynode));
    printf("Enter the data for node %d: ", i);
    scanf("%d", &new->data);
    new->next = NULL;
    new->previous = p;
    p->next = new;
    p = new;
    i++, n--;
  }
  return header;
}