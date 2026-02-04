/*
leetcode 941 - valid mountain array
difficulty: easy
topic: array

description:
The algorithm checks whether the array forms a valid mountain shape.
First, it verifies that the array has at least three elements. Then it
moves forward while the values are strictly increasing to find the peak.
If no increase occurs or the peak is at the end, the array is invalid.
After the peak, it continues moving forward while the values are strictly
decreasing. The array is valid only if the traversal ends exactly at the
last index.

approach:
single pass with two directional checks

time complexity: O(n)
space complexity: O(1)
*/
#include <vector>
using namespace std;

class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
            int n = arr.size();
    if (n < 3) return false;
    int i = 0;
    while (i + 1 < n && arr[i] < arr[i + 1]) i++;
    if (i == 0 || i == n - 1) return false;
    while (i + 1 < n && arr[i] > arr[i + 1]) i++;
    return i == n - 1;}
};
