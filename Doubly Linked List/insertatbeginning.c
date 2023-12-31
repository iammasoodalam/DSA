#include <stdio.h>
#include "doublynode.h"

doublynode *insertAtBeginningDLL(doublynode *header)
{
  int n; // number of nodes to be inserted
  printf("Enter the number of nodes to be inserted: ");
  scanf("%d", &n);
  while (n != 0)
  {
    doublynode *new = (doublynode *)malloc(sizeof(doublynode));
    if (new == NULL)
    {
      printf("Memory insufficient... \n\n");
      return header;
    }
    printf("Enter the data for the new node: ");
    scanf("%d", &new->data);
    new->previous = header;
    new->next = header->next;
    header->next = new;
    n--;
  }
  return header;
}