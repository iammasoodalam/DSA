#include <stdio.h>
#include "doublynode.h"

doublynode *deleteAtEndDLL(doublynode *header)
{
  doublynode *p = header->next, *pTrail;
  while (p->next != NULL)
  {
    pTrail = p;
    p = p->next;
  }
  pTrail->next = NULL;
  free(p);
  return header;
}