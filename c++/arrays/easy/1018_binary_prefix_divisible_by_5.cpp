/*
leetcode 1018 - binary prefixes divisible by 5
difficulty: easy
topic: array

description:
The algorithm processes a binary array where each prefix represents
a binary number. Instead of converting the full binary number (which
could overflow), it keeps track of the current value modulo 5.
For each new bit, the value is updated using:
(mod * 2 + bit) % 5.

If the modulo equals 0, the prefix is divisible by 5 and true is stored.
approach:
prefix modulo calculation

time complexity: O(n)
space complexity: O(n)
*/
#include <vector>
using namespace std;

class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
  vector<bool> answer;
    answer.reserve(nums.size());

    int mod = 0;

    for (int bit : nums) {
        mod = (mod * 2 + bit) % 5;  
        answer.push_back(mod == 0);
    }

    return answer;
    }
};
