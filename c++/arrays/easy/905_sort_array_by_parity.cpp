/*
leetcode 905 - sort array by parity
difficulty: easy
topic: array

description:
The algorithm rearranges the array so that all even elements appear
before odd elements. It iterates through the array and, when an element
that does not satisfy the parity condition is found, it searches ahead
for an even number and swaps both values. The resulting order places
even numbers first, followed by odd numbers. A new array is built to
store the reordered values.

approach:
nested loop swapping with auxiliary array

time complexity: O(n^2)
space complexity: O(n)
*/
#include <vector>
using namespace std;

class Solution {

public:
    vector<int> sortArrayByParity(vector<int>& nums) {
    int length = nums.size();
    vector<int> r(length);
    for (int i = 0; i < length; ++i){
        if ((nums[i]%2) != 0 || nums[i] > 0){
            for(int j = i; j < length; ++j)
                if ((nums[j]%2) == 0) {
                    int current = nums[i];
                    nums[i] = nums[j];
                    nums[j] = current;
                }
            r[i] = nums[i];
        }
    }
    return r;
    }
};
