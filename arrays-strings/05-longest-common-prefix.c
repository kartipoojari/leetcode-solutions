
#include <stdio.h>
#include <string.h>

int main()
{
    int n, i, j;
    char words[100][100];
    int minLen, match = 1;

    printf("Enter number of strings: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100)
    {
        printf("Invalid number of strings\n");
        return 0;
    }

    printf("Enter the strings:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%99s", words[i]);
    }

    minLen = strlen(words[0]);

    for (i = 1; i < n; i++)
    {
        if ((int)strlen(words[i]) < minLen)
        {
            minLen = strlen(words[i]);
        }
    }

    for (j = 0; j < minLen; j++)
    {
        for (i = 1; i < n; i++)
        {
            if (words[i][j] != words[0][j])
            {
                match = 0;
                break;
            }
        }

        if (!match)
        {
            break;
        }
    }

    printf("Longest common prefix: ");
    for (i = 0; i < j; i++)
    {
        printf("%c", words[0][i]);
    }
    printf("\n");

    return 0;
}
