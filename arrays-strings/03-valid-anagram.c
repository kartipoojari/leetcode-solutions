
#include <stdio.h>
#include <string.h>

int main()
{
    char s1[100], s2[100];
    int count[256] = {0};
    int i;

    printf("Enter first string: ");
    scanf("%99s", s1);

    printf("Enter second string: ");
    scanf("%99s", s2);

    if (strlen(s1) != strlen(s2))
    {
        printf("Not an Anagram\n");
        return 0;
    }

    for (i = 0; s1[i] != '\0'; i++)
    {
        count[(unsigned char)s1[i]]++;
        count[(unsigned char)s2[i]]--;
    }

    for (i = 0; i < 256; i++)
    {
        if (count[i] != 0)
        {
            printf("Not an Anagram\n");
            return 0;
        }
    }

    printf("Valid Anagram\n");

    return 0;
}
