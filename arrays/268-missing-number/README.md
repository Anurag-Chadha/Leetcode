An array having elements in the range [0,n] but one of the numbers is missing from the range find that number.

**Optimal Approach1:** Sum of first n numbers is (n*(n+1))/2. Subtract sum of numbers in array from this.

**Time Complexity:** O(n)

**Space Complexity:** O(1)

**Optimal Approach2 (slightly better because no risk of overflow in int):** XOR of number with itself is zero, XOR of number with 0 is number itself.XOR all numbers from 0-n, XOR all elements of array, XOR both to get the missing numbers.

**Time Complexity:** O(n)

**Space Complexity:** O(1)

