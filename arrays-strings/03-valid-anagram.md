
# Valid Anagram

- **Platform:** LeetCode
- **Difficulty:** Easy
- **Language:** C
- **Topic:** Arrays and Strings

## Problem
Determine whether two strings contain the same characters with the same frequencies.

## Approach
1. Read the two strings.
2. Check whether their lengths are equal.
3. Count the characters in the first string.
4. Subtract the character counts for the second string.
5. If every count is zero, the strings are anagrams.

## Time Complexity
O(n)

## Space Complexity
O(1) for the fixed-size character-count array.

## Test Cases

| First String | Second String | Expected Output |
|---|---|---|
| listen | silent | Valid Anagram |
| hello | world | Not an Anagram |

## Learning
This problem helped me understand character counting and arrays in C.
