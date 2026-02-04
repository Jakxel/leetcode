/*
leetcode 485 - Max consecutives ones
difficulty: easy
topic: array

description:
Given a binary array, the algorithm iterates through the elements counting
consecutive 1s. When a 0 is found, the current count is reset. The maximum
count of consecutive 1s is stored and returned as the result.

approach:
iterative count (sliding window style)

time complexity: O(n)
space complexity: O(1)
*/
#include <iostream>
#include <vector>
using namespace std;

class solution {
public:
    int findmaxconsecutiveones(vector<int>& nums) {
         int result = 0;
      int longest = 0;
      for ( int i = 0; i < nums.size(); ++i){
        if (nums[i] == 1) {
          ++longest;
        } else if (nums[i] != 1) {
          longest = 0;
        }
        if (longest > result)
        result = longest;
      }

      return result;   
    }
};
