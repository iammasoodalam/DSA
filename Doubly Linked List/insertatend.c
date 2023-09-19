#include <stdio.h>
#include "doublynode.h"

doublynode *insertAtEnd(doublynode *header)
{
  int n; // number of nodes to be inserted
  doublynode *p = header;
  while (p->next != NULL)
  {
    p = p->next;
  }
  doublyTraversal(header);
  printf("Enter the number of nodes to be inserted: ");
  scanf("%d", &n);
  while (n != 0)
  {
    doublynode *new = (doublynode *)malloc(sizeof(doublynode));
    if (new == NULL)
    {
      printf("Memory insifficient... \n\n");
      return header;
    }
    printf("Enter the data for the new node: ");
    scanf("%d", &new->data);
    p->next = new;
    new->previous = p;
    new->next = NULL;
    p = new;
    n--;
  }
  doublyTraversal(header);
  return header;
}