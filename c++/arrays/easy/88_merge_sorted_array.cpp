/*
leetcode 88 - merge sorted array
difficulty: easy
topic: array

description:
The algorithm merges two sorted arrays into the first array in-place.
The first array has enough space to hold all elements from both arrays.
Three pointers are used starting from the end: one for the last valid
element in nums1, one for the last element in nums2, and one for the
final position in nums1. The largest elements are placed at the end,
ensuring that no existing values are overwritten.

approach:
two pointers from the end (in-place merge)

time complexity: O(m + n)
space complexity: O(1)
*/
#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
         int i = m - 1;       
        int j = n - 1;       
        int k = m + n - 1;  

        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[k--] = nums1[i--];
            } else {
                nums1[k--] = nums2[j--];
            }
        }

        while (j >= 0) {
            nums1[k--] = nums2[j--];
        }
    }
};
