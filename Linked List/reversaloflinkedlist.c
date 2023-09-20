#include <stdio.h>
#include "node.h"

node *reversal(node *header)
{
  node *q = header->link;
  node *r = NULL, *s = NULL;

  while (q != NULL)
  {
    r = q;
    q = q->link;
    r->link = s;
    // q->link = r;
    s = r;
  }
  header->link = r;
  return header;
}
