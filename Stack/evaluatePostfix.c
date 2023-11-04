#include <stdio.h>
#include <math.h>
#include "infixToPostfix.c"

double evaluatePostfix(char *postfixExpression)
{
  int i = 0;
  double x, y;
  char operator;
  double value;
  char item = postfixExpression[i];

  while (item != '\0')
  {
    if ((item >= 'A' && item <= 'Z') ||
        (item >= 'a' && item <= 'z'))
    {
      printf("Enter value of %c: ", item);
      scanf("%lf", &value);
      push(value);
    }
    else
    {
      operator= item;
      y = pop();
      x = pop();
      switch (operator)
      {
      case '+':
        push(x + y);
        break;
      case '-':
        push(x - y);
        break;
      case '*':
        push(x * y);
        break;
      case '/':
        push(x / y);
        break;
      case '^':
        push(pow(x, y));
        break;
      default:
        printf("invalid operator...\n");
        break;
      }
    }
    item = postfixExpression[++i];
  }
  return pop();
}