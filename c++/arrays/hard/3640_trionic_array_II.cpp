/*
LeetCode 3640 - Rionnic Array II
Difficulty: Hard
Topic: Array / Subarrays / Prefix Sum

Description:
The algorithm finds the maximum sum of a "trionic" subarray within a given array.
A trionic subarray is defined as three consecutive segments:
1. A strictly increasing segment.
2. A strictly decreasing segment.
3. A strictly increasing segment.

Approach:
- Compute the prefix sum of the array to quickly obtain the sum of any subarray.
- Iterate over all possible combinations of indices that could form trionic subarrays.
- Check that each segment satisfies the strict increasing/decreasing condition.
- Track and update the maximum sum found.

Time Complexity: O(n^4) in the current implementation (due to four nested loops)
Space Complexity: O(n) (for the prefix sum array)
*/
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    long long maxSumTrionic(vector<int>& nums) {
        int n = nums.size();
        if (n < 3) return 0;
        
        vector<long long> prefixSum(n+1, 0);
        for (int i = 0; i < n; i++) {
            prefixSum[i+1] = prefixSum[i] + nums[i];
        }
        
        long long maxSum = LLONG_MIN;
        
        for (int l = 0; l < n-2; l++) {
            for (int p = l+1; p < n-1; p++) {
                bool validInc1 = true;
                for (int i = l; i < p; i++) {
                    if (nums[i] >= nums[i+1]) {
                        validInc1 = false;
                        break;
                    }
                }
                if (!validInc1) continue;
                
                for (int q = p+1; q < n; q++) {
                    bool validDec = true;
                    for (int i = p; i < q; i++) {
                        if (nums[i] <= nums[i+1]) {
                            validDec = false;
                            break;
                        }
                    }
                    if (!validDec) continue;
                    
                    for (int r = q+1; r < n; r++) {
                        bool validInc2 = true;
                        for (int i = q; i < r; i++) {
                            if (nums[i] >= nums[i+1]) {
                                validInc2 = false;
                                break;
                            }
                        }
                        if (!validInc2) continue;
                        
                        long long sum = prefixSum[r+1] - prefixSum[l];
                        maxSum = max(maxSum, sum);
                    }
                }
            }
        }
        
        return maxSum;
    }
};

int main() {
    vector<int> case1 = {0,-2,-1,-3,0,2,-1};
    vector<int> case2 = {0,-2,-1,-3,0,2,-1};

    Solution solution1;
    cout << solution1.maxSumTrionic(case1);
    cout << solution1.maxSumTrionic(case2);

    return 0;
}
