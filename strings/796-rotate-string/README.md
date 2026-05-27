Given string s and goal. Return true if after certain shifts s can be converted to goal.

**Optimal Approach:** Store s+s in a temp string. temp now contains all the rotations of the string s. Use find() function to check if goal exists in temp.

**Time Complexity:** O(n) (if find() uses KMP or Rabin Karp algorithm)

**Space Complexity:** O(n)
