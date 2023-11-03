#include <stdio.h>
#include <stdlib.h>
#include "stackStructureArray.h"
#include "stackPushArray.c"
#include "stackPopArray.c"
#include "instackPriority.c"
#include "incomingPriority.c"
#define MAX_EXPRESSION_SIZE 50

char output[MAX_EXPRESSION_SIZE];

char *infixToPostfix(char *expresssion)
{
    int i = 0, j = 0;
    char x;

    // Adding delimitter ')' at the end of the equation
    int k = 0;
    while (expresssion[k] != '\0')
    {
        k++;
    }
    expresssion[k++] = ')';
    expresssion[k] = '\0';

    stack.top = 0;
    push('(');

    while (stack.top > 0)
    {
        char item = expresssion[i];

        // This will handle spaces in the user's Arithmatic expression
        if (item == ' ')
        {
            i++;
            continue;
        }

        x = pop();

        if ((item > 64 && item < 91) || // if item is A - Z
            (item > 96 && item < 123))  // if item is a - z
        {
            push(x);
            output[j] = item;
            j++;
        }
        else if (item == ')')
        {
            while (x != '(')
            {
                output[j++] = x;
                x = pop();
            }
        }
        else if (instackPriority(x) >= incomingPriority(item))
        {
            while (instackPriority(x) >= incomingPriority(item))
            {
                output[j++] = x;
                x = pop();
            }
            push(x);
            push(item);
        }
        else if (instackPriority(x) < incomingPriority(item))
        {
            push(x);
            push(item);
        }
        else
        {
            printf("Invalid expression...\n");
        }

        i++; // incrementing to get next character.
    }
    return output;
}