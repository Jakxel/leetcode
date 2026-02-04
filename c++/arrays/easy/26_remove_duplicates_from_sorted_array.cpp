/*
leetcode 26 - remove duplicates from sorted array
difficulty: easy
topic: array

description:
The algorithm removes duplicate elements from a sorted array in-place.
It uses a pointer k to track the position where the next unique element
should be placed. As the array is traversed, whenever a new value differs
from the previous one, it is written at index k and k is incremented.
The function returns the number of unique elements.

approach:
two pointers (in-place overwrite)

time complexity: O(n)
space complexity: O(1)
*/
#include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;

        int k = 1;
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] != nums[i - 1]) {
                nums[k] = nums[i];
                ++k;
            }
        }
        return k;
    }
};
