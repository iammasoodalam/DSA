int instackPriority(char symbol)
{
    switch (symbol)
    {
    case '+':
    case '-':
        return 2;
    case '*':
    case '/':
        return 4;
    case '^':
        return 5;
    case '(':
        return 0;
    default:
        if ((symbol > 64 && symbol < 91) || (symbol > 96 && symbol < 123))
        {
            return 8;
        }
        return -1; // invalid symbol
    }
}