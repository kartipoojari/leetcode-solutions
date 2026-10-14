
#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000];
    char stack[1000];
    int top = -1;
    int i, valid = 1;

    printf("Enter parentheses string: ");
    scanf("%999s", s);

    for (i = 0; s[i] != '\0'; i++)
    {
        char c = s[i];

        if (c == '(' || c == '[' || c == '{')
        {
            stack[++top] = c;
        }
        else if (c == ')' || c == ']' || c == '}')
        {
            if (top == -1)
            {
                valid = 0;
                break;
            }

            char open = stack[top--];

            if ((c == ')' && open != '(') ||
                (c == ']' && open != '[') ||
                (c == '}' && open != '{'))
            {
                valid = 0;
                break;
            }
        }
        else
        {
            valid = 0;
            break;
        }
    }

    if (top != -1)
    {
        valid = 0;
    }

    if (valid)
        printf("Valid Parentheses\n");
    else
        printf("Invalid Parentheses\n");

    return 0;
}
