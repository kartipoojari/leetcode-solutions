
#include <stdio.h>

int main()
{
    int n, prices[100];
    int i, minPrice, maxProfit = 0, profit;

    printf("Enter number of days: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100)
    {
        printf("Invalid number of days\n");
        return 0;
    }

    printf("Enter stock prices: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &prices[i]);
    }

    minPrice = prices[0];

    for (i = 1; i < n; i++)
    {
        profit = prices[i] - minPrice;

        if (profit > maxProfit)
        {
            maxProfit = profit;
        }

        if (prices[i] < minPrice)
        {
            minPrice = prices[i];
        }
    }

    printf("Maximum profit: %d\n", maxProfit);

    return 0;
}
