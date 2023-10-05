#include <stdio.h>
#include "doublynode.h"

doublynode *deleteAtBeginningDLL(doublynode *header)
{
  doublynode *p = header->next, *pFront;
  pFront = p->next;
  header->next = pFront;
  pFront->previous = header;
  free(p);
  return header;
}