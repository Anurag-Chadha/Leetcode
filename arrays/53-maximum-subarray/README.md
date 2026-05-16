Find the subarray with the largest sum and return the sum.(Solution optimized to return both sum as well as start and end index of subarray.)

**Optimal Approach:** Kadane's algorithm used, maintain a current sum, compare it with maximum sum and if it ever becomes negative reset it to 0 since it will only decrease the sum of future array.

**Time Complexity:** O(n)

**Space Complexity:** O(1)
