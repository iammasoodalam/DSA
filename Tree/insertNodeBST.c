#include <stdio.h>
#include <stdbool.h>
#include "treeStructure.h"
/**
 * This function will insert a value in the Binary search tree
 * by finding the perfect location for it, and if item already
 * then it will return.
 * @param root is the pointer to the root node of the tree.
 * @param key is the element to be inserted into the tree.
 * @returns pointer to the root node of the tree
 */
void insertNodeBST(Node *root, double key)
{
  Node *ptr = root, *ptr1;
  bool flag = false;

  while (ptr != NULL && flag == false)
  {
    if (key < ptr->data)
    {
      ptr1 = ptr;
      ptr = ptr->LChild;
    }
    else if (key > ptr->data)
    {
      ptr1 = ptr;
      ptr = ptr->RChild;
    }
    else
    {
      flag = true;
      printf("Item already exists in the tree...\n");
      return;
    }
  }
  if (ptr == NULL)
  {
    Node *new = (Node *)malloc(sizeof(Node));
    new->data = key;
    new->LChild = NULL;
    new->RChild = NULL;

    if (ptr1->data < key)
      ptr1->RChild = new;
    else
      ptr1->LChild = new;
  }
}
