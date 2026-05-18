Given an array with equal number of positive and negative elements. Rearrange the given array nums and return it such that it starts with a positive element,consecutive elements are opposite in sign and relative order of positive and negative elements is maintained.

**Optimal Approach:** Create an answer array and iterate over the original array. Store in ans array positive elements at even position and negative elements at odd position.

**Time Complexity:** O(n)

**Space Complexity:** O(n)
