
# Valid Parentheses

- **Platform:** LeetCode
- **Difficulty:** Easy
- **Language:** C
- **Topic:** Stack

## Problem
Determine whether every opening bracket has a matching closing bracket in the correct order.

## Approach
1. Read the parentheses string.
2. Create a stack to store opening brackets.
3. Push each opening bracket onto the stack.
4. For each closing bracket, check whether it matches the top opening bracket.
5. If a mismatch occurs, the string is invalid.
6. After processing, the stack must be empty for the string to be valid.

## Time Complexity
O(n)

## Space Complexity
O(n), because the stack may store all opening brackets.

## Test Cases

| Input | Expected Output |
|---|---|
| ()[]{} | Valid Parentheses |
| ([)] | Invalid Parentheses |
| (( | Invalid Parentheses |

## Learning
This problem helped me understand stack operations and bracket matching in C.
