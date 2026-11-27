# Types of sort and their Complexity 
# Sort
# Explanation 
In this we are given a vector of integers and its size determine if the array is sorted . Return true if sorted or false otherwise.
# Complexity 

# ______________________
# Quick Sort 
## Ascending 
## Explanation 
It selects the last element as the pivot, initializes an index just before the start of the subarray to mark the boundary for elements smaller than or equal to the pivot, and iterates through the subarray swapping smaller elements to the left side while leaving larger ones on the right. The pivot is then swapped into its final sorted position, and the function recursively sorts the left and right subarrays until the entire array is ordered, achieving an average time complexity of O(n log n).
## Complexity 
## Descending 
## Complexity 
#  ______________________
# Merge Sort 
# Explanation 
Merge sort is a classic divide and conquer algorithm with O(n logn) time complexity that works recursively dividing the array into halves, sorting them,and then merging them back in the order
# Complexity 
