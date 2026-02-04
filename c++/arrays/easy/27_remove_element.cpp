/*
leetcode 27 - remove element
difficulty: easy
topic: array

description:
The algorithm removes all occurrences of a given value from the array
in-place. It iterates through the array and, whenever the target value
is found, shifts all subsequent elements one position to the left.
The effective length of the array is reduced accordingly. Elements
beyond the returned length are not considered.

approach:
in-place shifting

time complexity: O(n^2)
space complexity: O(1)
*/
#include <vector>
using namespace std;

#include <iostream>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int length = nums.size();

        for( int i = 0; i < length;){
            if( nums[i] == val) {
              for( int j = i; j < length - 1; ++j ){
                nums[j]= nums[j + 1];
              }
              --length;
             } else {
                ++i;
            }
          }
         return length;
    }
};
