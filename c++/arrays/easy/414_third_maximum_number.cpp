/*
leetcode 414 - third maximum number
difficulty: easy
topic: array

description:
The algorithm finds the third distinct maximum number in the array.
First, the array is sorted in descending order. Then, it iterates through
the sorted array while counting distinct values. Each time a new smaller
distinct number is found, a counter is increased. If three distinct
maximum values are found, the third one is returned. If fewer than three
distinct values exist, the maximum value (first element after sorting)
is returned.

approach:
sorting and distinct value tracking

time complexity: O(n log n)
space complexity: O(1)
*/
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(), nums.end(), greater<>());

        int r = nums[0];
        int ptr = 1;

        for (int i = 0; i < nums.size(); ++i) {
            if (ptr < 3 && nums[i] < r) {
                r = nums[i];
                ++ptr;
            }
        }

        if (ptr == 2) {
            r = nums[0];
        }

        return r;
    }
};
