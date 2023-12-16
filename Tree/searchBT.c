#include <stdio.h>
#include "treeStructure.h"

/**
 * This function will search a node in any binray tree
 * @param PTRO pointer to node where search will start.
 * @param key item to be searched in the tree.
 * @returns pointer to node or NULL
 */
#ifndef SEARCH_BT
#define SEARCH_BT
Node *searchBT(Node *PTRO, double key)
{
  Node *ptr = PTRO, *res;
  if (ptr->data != key)
  {
    if (ptr->LChild != NULL)
    {
      res = searchBT(ptr->LChild, key);
      if (res)
        return res;
    }
    else
      return NULL;

    if (ptr->RChild != NULL)
    {
      res = searchBT(ptr->RChild, key);
      if (res)
        return res;
    }
    else
      return NULL;
  }
  else
    return ptr;
}
#endif