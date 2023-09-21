#include <stdio.h>
#include "node.h"

void searchANode(node *header)
{
  int found = 0, position = 0, key;
  node *location;
  node *ptr = header->link;

  printf("Enter the number you want to search in the list: ");
  scanf("%d", &key);

  while ((ptr != NULL) && (found == 0))
  {
    position++;
    if (ptr->data == key)
    {
      found = 1;
      location = ptr;
    }
    else
    {
      ptr = ptr->link;
    }
  }
  if (found == 1)
  {
    printf("%d is found in %d position at address of %p\n", key, position, location);
  }
  else
  {
    printf("The number %d is not available.\n", key);
  }
}