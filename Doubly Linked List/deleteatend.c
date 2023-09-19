#include <stdio.h>
#include "doublynode.h"

doublynode *deleteAtEnd(doublynode *header)
{
  doublynode *p = header->next, *pTrail;
  while (p->next != NULL)
  {
    pTrail = p;
    p = p->next;
  }
  pTrail->next = NULL;
  free(p);
  doublyTraversal(header);
  return header;
}