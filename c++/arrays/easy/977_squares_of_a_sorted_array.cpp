/*
leetcode 977 - squares of a sorted array
difficulty: easy
topic: array

description:
The algorithm computes the square of each element in the array and stores
the results in a new array. Since squaring can disrupt the sorted order
when negative numbers are present, the resulting array is sorted again
to obtain non-decreasing order before being returned.

approach:
square then sort

time complexity: O(n log n)
space complexity: O(n)
*/
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> result(nums.size());
        for (int i = 0; i < nums.size(); ++i) {
            result[i] = nums[i] * nums[i];
        }
        sort(result.begin(), result.end());
        return result;
    }
};
