#ifndef TREE_STRUCTURE
#define TREE_STRUCTURE
/**
 * Node is a user defined data type which have three different
 * predefined data types.
 *
 * Member [data] - stores the key
 * Member [LChild] - stores the pointer to left child
 * Member [RChild] - stores the pointer to right child
 */
typedef struct node
{
  double data;
  struct node *LChild;
  struct node *RChild;
} Node;
#endif