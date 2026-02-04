/*
leetcode 717 - 1-bit and 2-bit characters
difficulty: easy
topic: array

description:
The algorithm determines whether the last character in the bit array
is a one-bit character. It iterates through the array by decoding
each character: a '0' represents a one-bit character, while a '1'
represents the start of a two-bit character. The index is advanced
accordingly until reaching the end. If the final position lands exactly
on the last index, the last character is a one-bit character.

approach:
greedy decoding simulation

time complexity: O(n)
space complexity: O(1)
*/
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
    int i = 0;
    int n = bits.size();
    while (i < n - 1) {  
        if (bits[i] == 1) {
            i += 2;  
        } else {
            i += 1;  
        }
    }
    return i == n - 1;
    }
};

