
#include <stdio.h>

int main()
{
    int n, a[100];
    int i, j = 0, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100)
    {
        printf("Invalid number of elements\n");
        return 0;
    }

    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            j++;
        }
    }

    printf("Array after moving zeroes: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n");
    return 0;
}
