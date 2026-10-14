
# Move Zeroes

- **Platform:** LeetCode
- **Difficulty:** Easy
- **Language:** C
- **Topic:** Arrays

## Problem
Move all zeroes in an array to the end while keeping the order of non-zero elements unchanged.

## Approach
1. Read the array elements.
2. Use a second index to track the next position for a non-zero element.
3. Traverse the array.
4. When a non-zero element is found, move it to the tracked position.
5. Print the updated array.

## Time Complexity
O(n)

## Space Complexity
O(1) auxiliary space.

## Test Cases

| Input Array | Expected Output |
|---|---|
| 0, 1, 0, 3, 12 | 1, 3, 12, 0, 0 |
| 0, 0, 1 | 1, 0, 0 |

## Learning
This problem helped me understand array traversal and in-place rearrangement in C.
