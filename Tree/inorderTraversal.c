#include <stdio.h>
#include "treeStructure.h"
/**
 * This function will traverse a binary tree in inorder fashion
 * and prints the node data into the console.
 * @param root is the pointer to the root of the binary tree
 * @return void
 */
void inorderTraversal(Node *root)
{
  Node *ptr = root;
  if (ptr != NULL)
  {
    inorderTraversal(ptr->LChild);
    printf("\t%.0lf", ptr->data);
    inorderTraversal(ptr->RChild);
  }
}