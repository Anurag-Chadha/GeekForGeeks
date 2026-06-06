Given sorted array and target element. Find index of smallest element greater than target element in the sorted array.

**Optimal Approach:** Binary search to find the ans. For each value of mid update ans variable if nums[mid] is greater than target and shrink the search space from the right to check if any smaller element greater than target exists or not.|

**Time Complexity:** O(logn)


