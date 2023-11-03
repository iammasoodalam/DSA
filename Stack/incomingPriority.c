int incomingPriority(char symbol)
{
    switch (symbol)
    {
    case '+':
    case '-':
        return 1;
    case '*':
    case '/':
        return 3;
    case '^':
        return 6;
    case '(':
        return 9;
    case ')':
        return 0;
    default:
        if ((symbol > 64 && symbol < 91) || (symbol > 96 && symbol < 123))
        {
            return 7;
        }
        return -1; // invalid symbol
    }
}