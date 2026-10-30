# Leetcode 240 Search a 2D Matrix II
# Explanation 
In this problem we are given a matrix m×n and
we need to find a value target
# Intuition 
We use binary search in this to find the target 
# Algorithm 
1. Initialize m and with the sizes of rows and columns respectively
2. Initialize r and c with 0 and n-1 respectively
3. Start a while loop compare the elements of matrix with target if it matches return the element
4. Otherwise implement binary search 
# Complexity 
Time Complexity : O(log(n))

Space Complexity : O(1)
