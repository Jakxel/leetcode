/*
leetcode 1295 - find numbers with even number of digits
difficulty: easy
topic: array

description:
The algorithm iterates through the array of integers and counts how many
numbers contain an even number of digits. Each number is converted to a
string, and the length of the string representation is checked. If the
digit count is even, the result counter is incremented.

approach:
digit counting using string conversion

time complexity: O(n * d)
space complexity: O(1)
*/
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int r = 0;
        for (int i = 0; i < nums.size(); ++i) {
        int a = nums[i];
        if (to_string(abs(a)).size() % 2 == 0)
          ++r;
      }
        return r;
    }
};
