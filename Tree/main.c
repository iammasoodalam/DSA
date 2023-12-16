#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "treeStructure.h"
#include "createTreeLL.c"
#include "insertNodeBT.c"
#include "searchBT.c"
#include "inorderTraversal.c"
#include "preorderTraversal.c"
#include "postorderTraversal.c"
#include "insertNodeBST.c"
#include "searchBST.c"

int main()
{
  Node *root = (Node *)malloc(sizeof(Node));
  double key;

  // creating a binary tree
  printf("Create a binary tree...\n\n");
  createTreeLL(root);

  // traversing the created tree in all fashion
  printf("\nPrinting the tree in \"inorder\"\n");
  inorderTraversal(root);
  printf("\nPrinting the tree in \"preorder\"\n");
  preorder(root);
  printf("\nPrinting the tree in \"postorder\"\n");
  postorder(root);

  // searching a node in binary tree
  printf("\n\nEnter the value to search: ");
  scanf(" %lf", &key);

  Node *item = searchBT(root, key);

  if (item == NULL)
    printf("\n%lf is not available in the tree...\n", key);
  else
    printf("\n%lf is avalable in the tree with address of %p\n", key, item);

  printf("\nEnter the key after which new node is to be inserted: ");
  scanf(" %lf", &key);

  insertNodeBT(root, key);

  printf("\nTraversing the tree again after adding new node: \n");
  // traversing the created tree in all fashion
  printf("\nPrinting the tree in \"inorder\"\n");
  inorderTraversal(root);
  printf("\nPrinting the tree in \"preorder\"\n");
  preorder(root);
  printf("\nPrinting the tree in \"postorder\"\n");
  postorder(root);

  // Creating a binary search tree
  printf("\nCreating a binary search tree... \n");

  int nodes;
  printf("Enter the number of nodes you want to enter: ");
  scanf(" %d", &nodes);

  Node *rootBST = (Node *)malloc(sizeof(Node));
  if (nodes > 0)
  {
    printf("Enter the key for the root node: ");
    scanf(" %lf", &key);
    rootBST->data = key;
  }
  for (int i = 1; i < nodes; i++)
  {
    printf("Enter the key for the new node: ");
    scanf("%lf", &key);
    insertNodeBST(rootBST, key);
  }

  // traverse bst in all fashion
  printf("\nPrinting the tree in \"inorder\"\n");
  inorderTraversal(rootBST);
  printf("\nPrinting the tree in \"preorder\"\n");
  preorder(rootBST);
  printf("\nPrinting the tree in \"postorder\"\n");
  postorder(rootBST);

  // search a node using searchBST function.
  printf("\n\nSearch a node in the Binary search tree...\n");
  printf("Enter the key to search in the bst: ");
  scanf(" %lf", &key);
  searchBST(rootBST, key);
  printf("\n");
  return 0;
}