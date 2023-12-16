#include <stdio.h>
#include "treeStructure.h"
/**
 * This function will traverse a binary tree in preorder fashion
 * and prints the node data into the console
 * @param root is the pointer to the root of the binary tree
 * @return void
 */
void preorder(Node *root)
{
  Node *ptr = root;
  if (ptr != NULL)
  {
    printf("\t%.0lf", ptr->data);
    preorder(ptr->LChild);
    preorder(ptr->RChild);
  }
}