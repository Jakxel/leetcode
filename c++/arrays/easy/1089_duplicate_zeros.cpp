/*
leetcode 1089 - duplicate zeros
difficulty: easy
topic: array

description:
The algorithm modifies the array in-place by duplicating each occurrence
of zero and shifting the remaining elements to the right. When a zero
is found, elements are shifted one position to the right starting from
the end of the array to avoid overwriting values. The duplicated zero
is inserted immediately after the original one, while keeping the array
length unchanged.

approach:
in-place shifting

time complexity: O(n^2)
space complexity: O(1)
*/
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size();
        for (int i = 0; i < n; ++i) {
            if (arr[i] == 0) {
                for (int j = n - 1; j > i; --j) {
                    arr[j] = arr[j - 1];
                }
                if (i + 1 < n) arr[i + 1] = 0;
                ++i;
            }
        }
    }
};
