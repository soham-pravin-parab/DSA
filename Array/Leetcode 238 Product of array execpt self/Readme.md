# Leetcode 238 Product of array execpt self
# Explanation 
In this problem we are given an integer array nums
and have to return an array answer such that answer[i]
is equal to the product of all the elements except nums[i].
# Intuition 
We declare a vector to store the answers and then run two for loops in the first one we multiply the previous elements and in the second one we multiply the futher elements 
# Algorithm 
1. Declare a vector ans with n elements and 1 in their place.
2. Initialize a for loop starting from 1 in that make ans of ith element equal to the multiple of ans of i-1th element multiplied by i-1 th element. In short we're multiplying the previous elements 
3. Initialize another for loop here multiply the further elements 
# Complexity 
Time Complexity : O(n)

Space Complexity : O(n)
