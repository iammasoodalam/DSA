#include <stdio.h>
#include "doublynode.h"

doublynode *insertAtAnyPositionDLL(doublynode *header)
{
  int n, position, size = 0; // n is number of nodes to be inserted;
  doublynode *p = header->next;
  doublynode *pTrail = header;
  printf("Enter the positon for the new nodes: ");
  scanf("%d", &position);

  // Calculating the size of our inserted list.
  while (p != NULL)
  {
    size++;
    p = p->next;
  }
  // Reinitilizing p for further use.
  p = header->next;
  // Checking if position is possible for new nodes
  if (position < 1 || position > size + 1)
  {
    printf("You are going out of bound...\n\n");
    return header;
  }

  printf("Enter the number of nodes to be inserted: ");
  scanf("%d", &n);

  // Traversing the list to the required position
  for (int i = 1; i < position; i++)
  {
    pTrail = p;
    p = p->next;
  }

  // Adding required no. of nodes in the list.
  while (n != 0)
  {
    doublynode *new = (doublynode *)malloc(sizeof(doublynode));
    if (new == NULL)
    {
      printf("Memory insufficient...\n\n");
      return header;
    }
    printf("Enter the data for the new node: ");
    scanf("%d", &new->data);
    new->previous = pTrail;
    if (p != NULL)
    {
      new->next = p;
      p->previous = new;
    }
    else
    {
      new->next = NULL;
    }
    pTrail->next = new;
    pTrail = new;
    n--;
  }
  return header;
}