/*
leetcode 3634 - Minimum removals to balance array
difficulty: medium
topic: array

description:

approach:
...

time complexity: ...
space complexity: ...
*/
#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    int x = *(const int *)a;
    int y = *(const int *)b;
    return x - y;
}

int minRemoval(int *nums, int numsSize, int k) {
    if (numsSize == 0) return 0;

    qsort(nums, numsSize, sizeof(nums[0]), cmp);

    int maxLen = 1;
    int left = 0;

    for (int right = 0; right < numsSize; right++) {
        while (nums[right] - nums[left] > k) {
            left++;
        }
        int window = right - left + 1;
        if (window > maxLen)
            maxLen = window;
    }

    return numsSize - maxLen;
}

int main(void) {
    int nums[] = {2, 1, 5};
    int k = 2;

    int result = minRemoval(nums, 3, k);
    printf("min removals = %d\n", result);

    return 0;
}
