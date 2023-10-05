#include <stdio.h>
#include <stdlib.h>
#include "node.h"

node *mergeAndSortLL(node *header1, node *header2)
{
  node *ptr1 = header1->link, *ptr2 = header2->link;
  node *header3 = (node *)malloc(sizeof(node));
  node *ptr3 = header3;

  while (ptr1 != NULL && ptr2 != NULL)
  {
    node *new = (node *)malloc(sizeof(node));
    if (ptr1->data < ptr2->data)
    {
      new->data = ptr1->data;
      new->link = NULL;
      ptr3->link = new;
      ptr3 = new;
      ptr1 = ptr1->link;
    }
    else if (ptr1->data > ptr2->data)
    {
      new->data = ptr2->data;
      new->link = NULL;
      ptr3->link = new;
      ptr3 = new;
      ptr2 = ptr2->link;
    }
    else
    {
      new->data = ptr2->data;
      new->link = NULL;
      ptr3->link = new;
      ptr3 = new;
      ptr2 = ptr2->link;
      ptr1 = ptr1->link;
    }
  }
  while (ptr1 != NULL)
  {
    node *new = (node *)malloc(sizeof(node));
    new->data = ptr1->data;
    new->link = NULL;
    ptr3->link = new;
    ptr3 = new;
    ptr1 = ptr1->link;
  }
  while (ptr2 != NULL)
  {
    node *new = (node *)malloc(sizeof(node));
    new->data = ptr2->data;
    new->link = NULL;
    ptr3->link = new;
    ptr3 = new;
    ptr2 = ptr2->link;
  }

  return header3;
}