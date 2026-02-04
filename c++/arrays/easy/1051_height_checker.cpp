/*
leetcode 1051 - height checker
difficulty: easy
topic: array

description:
The algorithm determines how many elements in the array are not in the
position they would be if the array were sorted in non-decreasing order.
First, a copy of the original array is stored. Then the array is sorted.
Both arrays are compared index by index, and a counter is incremented
whenever the values differ.

approach:
sorting and comparison

time complexity: O(n log n)
space complexity: O(n)
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> a = heights;
        sort(heights.begin(), heights.end());
        vector<int> b = heights;

        int r = 0;
        for (int i = 0; i < a.size(); ++i) {
            if (a[i] != b[i]) {
                ++r;
            }
        }
        return r;
    }
};
