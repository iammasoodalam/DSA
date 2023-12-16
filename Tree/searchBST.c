#include <stdio.h>
#include "treeStructure.h"
#include <stdbool.h>
/**
 * This function will search a value in the Binary search tree
 * @param PTRO pointer to node where search will start.
 * @param key item to be searched in the tree.
 * @returns pointer to the node containing the key
 */
Node *searchBST(Node *PTRO, double key)
{
  Node *ptr = PTRO;
  bool flag = false;
  while (ptr != NULL && flag == false)
  {
    if (key < ptr->data)
    {
      ptr = ptr->LChild;
    }
    else if (key > ptr->data)
    {
      ptr = ptr->RChild;
    }
    else
    {
      flag = true;
    }
  }
  if (flag == true)
  {
    printf("\n%lf found in memory location of %p", key, ptr);
    return ptr;
  }
  else
  {
    printf("\nSearch unsuccessful");
    return NULL;
  }
}
