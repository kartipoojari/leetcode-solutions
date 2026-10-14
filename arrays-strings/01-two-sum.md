# Two Sum

## Problem

Given an array of integers `nums` and an integer `target`, find two different elements in the array whose sum is equal to the target.

Return the **indices** of the two elements.

### Example

```text
Input:
nums = [2, 7, 11, 15]
target = 9

Output:
[0, 1]
```

### Explanation

```text
nums[0] + nums[1]
= 2 + 7
= 9
```

Therefore, the answer is:

```text
[0, 1]
```

## Approach

We can use two loops to check every possible pair.

1. Start with the first element.
2. Compare it with every element after it.
3. Check whether their sum is equal to `target`.
4. If the sum is equal, return their indices.
5. If no pair is found, return `[-1, -1]`.

## C Program

```c
#include <stdio.h>

int main()
{
    int nums[100], n, target;
    int i, j;
    int found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    printf("Enter target: ");
    scanf("%d", &target);

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                printf("Indices: [%d, %d]\n", i, j);
                found = 1;
                break;
            }
        }

        if (found)
            break;
    }

    if (!found)
    {
        printf("No pair found\n");
    }

    return 0;
}
```

## Example Input

```text
Enter number of elements: 4
Enter elements:
2 7 11 15
Enter target: 9
```

## Example Output

```text
Indices: [0, 1]
```

## Complexity

* **Time Complexity:** `O(n²)`
* **Space Complexity:** `O(1)`

## Key Point

The program checks every possible pair using **nested loops**.

```c
for (i = 0
```
