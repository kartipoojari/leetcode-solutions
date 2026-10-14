
# Best Time to Buy and Sell Stock

- **Platform:** LeetCode
- **Difficulty:** Easy
- **Language:** C
- **Topic:** Arrays

## Problem
Find the maximum profit possible by buying a stock on one day and selling it on a later day.

## Approach
1. Read the stock prices.
2. Store the lowest price seen so far.
3. Calculate the profit using the current price and the lowest price.
4. Update the maximum profit when a better profit is found.
5. Update the lowest price when a lower price is found.

## Time Complexity
O(n)

## Space Complexity
O(1) auxiliary space.

## Test Cases

| Prices | Expected Maximum Profit |
|---|---:|
| 7, 1, 5, 3, 6, 4 | 5 |
| 7, 6, 4, 3, 1 | 0 |

## Learning
This problem helped me understand arrays, loops, and tracking minimum and maximum values in C.
