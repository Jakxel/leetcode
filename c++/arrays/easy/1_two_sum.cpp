/*
leetcode 1 - two sum
difficulty: easy
topic: array

description:
The algorithm finds two distinct indices such that the sum of their
values equals the given target. As it iterates through the array,
it stores each value and its index in a hash map. For every element,
it checks whether the complementary value (target - current value)
already exists in the map. If found, the indices are returned immediately.

approach:
hash map lookup

time complexity: O(n)
space complexity: O(n)
*/
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public: 
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;

        for (int i = 0; i < nums.size(); i++) {
            int cur = nums[i];
            int x = target - cur;

            if (map.count(x)) {
                return {map[x], i};
            }
            map[cur] = i;
        }
        return {};
    }
};
