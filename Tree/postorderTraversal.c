#include <stdio.h>
#include "treeStructure.h"
/**
 * This function will traverse a binary tree in postorder fashion
 * and prints the node data into the console
 * @param root is the pointer to the root of the binary tree
 * @return void
 */
void postorder(Node *root)
{
  Node *ptr = root;
  if (ptr != NULL)
  {
    postorder(ptr->LChild);
    postorder(ptr->RChild);
    printf("\t%.0lf", ptr->data);
  }
}
