/*
leetcode 448 - find all numbers disappeared in an array
difficulty: easy
topic: array

description:
The algorithm finds all numbers in the range [1, n] that do not appear
in the array. It uses the input array itself to mark visited values by
negating the element at the index corresponding to each number. After
marking, any position that remains positive indicates that its index + 1
was missing from the original array and is added to the result.

approach:
in-place marking using index negation

time complexity: O(n)
space complexity: O(1)
*/
#include <vector>
#include <cstdlib>

using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            int idx = abs(nums[i]) - 1;
            if (nums[idx] > 0)
                nums[idx] *= -1;
        }

        vector<int> ans;
        for (int i = 0; i < n; i++) {
            if (nums[i] > 0)
                ans.push_back(i + 1);
        }

        return ans;
    }
};
