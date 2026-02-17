Find union of two sorted arrays.Return the union in sorted order.

**Approach:** Two pointer approach compare the elements of both the arrays one by one and insert the smaller element into unionArray if the last element is not equal to it or the unionArray is empty.
                (similar to merge sort algorithm.)

**Time Complexity:** O(n+m)

**Space Complexity:** O(1)  (O(n+m) used to return the answer.)
