#include <stdio.h>
#include <stdlib.h>
#include "searchBT.c"
#include "treeStructure.h"

/**
 * This function will search the node after which new value is
 * to be inserted then if its child is null value then you have
 * an option to insert new node as its left or right child
 * @param root is the pointer to the root of the tree
 * @param key is the value of node after which new node is to be inserted
 * @returns void
 */
void insertNodeBT(Node *root, double key)
{
  Node *ptr = searchBT(root, key);
  char option;
  double item;

  if (ptr == NULL)
  {
    printf("Search unsuccessfull...\n");
    return;
  }
  if (ptr->LChild == NULL || ptr->RChild == NULL)
  {
    printf("Insert as left child or Right child: \n");
    printf("Enter 'L' for Left Child or 'R' Right Child\n");
    scanf(" %c", &option);

    if (option == 'L' || option == 'l')
    {
      if (ptr->LChild == NULL)
      {
        Node *new = (Node *)malloc(sizeof(Node));
        printf("Enter the vlaue for the new node: ");
        scanf(" %lf", &item);
        new->data = item;
        new->LChild = NULL;
        new->RChild = NULL;
        ptr->LChild = new;
      }
      else
      {
        printf("Insertion is not possible as left child...\n");
        return;
      }
    }
    else if (option == 'R' || option == 'r')
    {
      if (ptr->RChild == NULL)
      {
        Node *new = (Node *)malloc(sizeof(Node));
        printf("Enter the vlaue for the new node: ");
        scanf(" %lf", &item);
        new->data = item;
        new->LChild = NULL;
        new->RChild = NULL;
        ptr->RChild = new;
      }
      else
      {
        printf("Insertion is not possible as right child...\n");
        return;
      }
    }
  }
}
