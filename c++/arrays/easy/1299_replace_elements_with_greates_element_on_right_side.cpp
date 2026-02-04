/*
leetcode 1299 - replace elements with greatest element on right side
difficulty: easy
topic: array

description:
The algorithm creates a new array and, for each index, searches all
elements to the right to find the maximum value. That maximum replaces
the current element in the result array. For the last index, the value
is set to -1 as required by the problem.

approach:
brute force maximum search

time complexity: O(n^2)
space complexity: O(n)
*/
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
            vector<int> result = arr;
    int length = arr.size();
    int l = 0;
    for( int i = 0; i < length; ++i){
        for (int j = i+1; j < length; ++j){
            if (arr[j] > l){
                l = arr[j];
            }
        }
        result[i] = l;
        if (i == length - 1)
            result[i] = -1;
        l = 0;
    }
    return result;
    }
};
