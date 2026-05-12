Find the length of longest subarray whose sum of elements is equal to K.

**Optimal Approach:** Store prefix sum in a map and for each element x check if x-k ever appeared in the map.

**Time Complexity:** O(n) //if unordered map is used then average complexity

**Space Complexity:** O(n)
