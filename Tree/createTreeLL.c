#include <stdio.h>
#include "treeStructure.h"
/**
 * Creates a tree as user defines by asking him if a node
 * have a left child or a right child is present or not.
 * @param ptr is a pointer to the predefined node.
 * @returns void
 */
void createTreeLL(Node *ptr)
{
  double item;
  char option;

  if (ptr != NULL)
  {
    printf("Enter the value for the node: ");
    scanf(" %lf", &item);
    ptr->data = item;
  }

  printf("Is pointer has left subtree? Y or N: ");
  scanf(" %c", &option);
  if (option == 'Y' || option == 'y')
  {
    Node *lcptr = (Node *)malloc(sizeof(Node));
    ptr->LChild = lcptr;
    createTreeLL(lcptr);
  }
  else
    ptr->LChild = NULL;

  printf("Is pointer has right subtree? Y or N: ");
  scanf(" %c", &option);
  if (option == 'Y' || option == 'y')
  {
    Node *rcptr = (Node *)malloc(sizeof(Node));
    ptr->RChild = rcptr;
    createTreeLL(rcptr);
  }
  else
    ptr->RChild = NULL;
}