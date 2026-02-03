# Count Inversion 
## Explanation 
The code uses merge sort dived and conquer
strategy . 
We recursively split the array , sort halfes
and count split inversion during merge. 
when merging , if an element from the right
is picked before the left half's remaining 
elements,  all those left elements from inversion 
with it.
