/*
leetcode 283 - move zeroes
difficulty: easy
topic: array

description:
The algorithm moves all zero values to the end of the array while
maintaining the relative order of the non-zero elements. It creates
a temporary array and copies all non-zero elements in order, then
fills the remaining positions with zeros by default. Finally, the
original array is replaced with the temporary one.

approach:
auxiliary array reconstruction

time complexity: O(n)
space complexity: O(n)
*/
#include <vector>

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int length = nums.size();
        vector<int> r(length);
        int position = 0;

        for (int i = 0; i < length; ++i) {
            if (nums[i] != 0) {
                r[position] = nums[i];
                ++position;
            }
        }
        nums = r;
    }
};
