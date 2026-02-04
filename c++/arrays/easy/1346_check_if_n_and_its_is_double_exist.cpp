/*
leetcode 1346 - check if n and its double exist
difficulty: easy
topic: array

description:
The algorithm checks whether there exist two different indices i and j
such that one element in the array is double the other. It compares all
possible pairs using two nested loops and skips cases where the indices
are the same. If any pair satisfies the condition, the function returns
true; otherwise, it returns false.

approach:
brute force pair comparison

time complexity: O(n^2)
space complexity: O(1)
*/
#include <vector>
using namespace std;
class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
    for ( int i = 0; i < arr.size(); ++i){
      for ( int j = 0; j < arr.size(); ++ j) {
          if (i == j) continue;
      if (arr[i] == 2 * arr[j]){
        return true;
        }
      }
    }
    return false;
    }
};
