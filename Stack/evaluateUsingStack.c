#include <stdio.h>
#include "evaluatePostfix.c"

int main()
{
  char expression[MAX_EXPRESSION_SIZE];
  char *postfix;
  double answer;

  // taking expression from user at run time, spaces are allowed
  printf("Enter your expression by replcing numbers with single letter variable: ");
  scanf("%[^\n]%*c", expression);

  postfix = infixToPostfix(expression);
  printf("%s\n", postfix);

  answer = evaluatePostfix(postfix);
  printf("Answer = %lf\n", answer);

  return 0;
}