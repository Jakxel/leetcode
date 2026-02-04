/*
leetcode 9 - palindrome number
difficulty: easy
topic: math

description:
The algorithm determines whether an integer is a palindrome. Negative
numbers are immediately rejected since they cannot form a palindrome.
For non-negative numbers, the algorithm reverses the digits of the
number using arithmetic operations and compares the reversed value
with the original number. If both values are equal, the number is a
palindrome.

approach:
integer reversal and comparison

time complexity: O(n)
space complexity: O(1)
*/
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;

        int original = x;
        long reversed = 0;

        while (x != 0) {
            int digit = x % 10;
            reversed = reversed * 10 + digit;
            x /= 10;
        }

        return reversed == original;
    }
};
