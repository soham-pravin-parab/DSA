# Quick Sort 
## Explanation 
It selects the last element as the pivot, initializes an index just before the start of the subarray to mark the boundary for elements smaller than or equal to the pivot, and iterates through the subarray swapping smaller elements to the left side while leaving larger ones on the right. The pivot is then swapped into its final sorted position, and the function recursively sorts the left and right subarrays until the entire array is ordered, achieving an average time complexity of O(n log n).
