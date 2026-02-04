/*
leetcode 2154 - keep multiplying found values by two
difficulty: easy
topic: array

description:
The algorithm determines the final value of a number after repeatedly
doubling it whenever it appears in the array. The array is first sorted
to ensure values are processed in ascending order. Then, the algorithm
iterates through the array, and each time the current value equals the
original number, the original value is multiplied by two. The final
result is returned.

approach:
sorting and iterative doubling

time complexity: O(n log n)
space complexity: O(1)
*/
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        sort(nums.begin(),nums.end());
        for ( int i = 0; i < nums.size(); ++i){
        if (nums[i] == original){
            original = original * 2;
        }
    }
    return original;

    }
};
