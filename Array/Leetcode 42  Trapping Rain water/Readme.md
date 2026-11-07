# Leetcode 42 Trapping Rain water
# Explanation 
In this problem we have n integers which represent 
a elevation map where width of each bar is 1
we need to return how much water can be trapped 
# Intuition 
we use the two pointer approach in this problem 
# Algorithm 
We initialize answer with 0 and lmax and rmax with the heights of the leftmost and the rightmost elements respectively and left and right with 0 and n respectively then we iterate throughout the array to find the largest height
# Complexity 
Time Complexity : O(n)

Space Complexity : O(1)
