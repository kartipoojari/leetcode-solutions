
# Longest Common Prefix

- **Platform:** LeetCode
- **Difficulty:** Easy
- **Language:** C
- **Topic:** Arrays and Strings

## Problem
Find the longest prefix shared by all strings in an array.

## Approach
1. Read the number of strings and the strings.
2. Find the length of the shortest string.
3. Compare characters at the same position in every string.
4. Stop when a mismatch is found.
5. Print the common prefix.

## Time Complexity
O(n × m), where n is the number of strings and m is the length of the shortest string.

## Space Complexity
O(1) auxiliary space for the prefix comparison, excluding storage for the input strings.

## Test Cases

| Input Strings | Expected Output |
|---|---|
| flower, flow, flight | fl |
| dog, racecar, car | Empty prefix |

## Learning
This problem helped me understand string comparison, arrays, and nested loops in C.
