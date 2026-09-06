# Leetcode 11 Container With Most Water
# Explanation 
In this problem we are given n vertical lines 
we need to find the maximum amount of water that
can be stored between any two lines
# Intuition 
We can use a two pointers approach here . compare both the heights and keep on incrementing the one one which is smaller also calculate the width between them and multiply the minimum height and width to get the area return the maximum area
# Algorithm 
create two pointers initialize one with the start and the other with the end create a while loop which continues till the left pointer is less than the right pointer copmare the height of both the pointer and increment the one which has lesser height also calulate the width the pointer multiply the minimum height and the the width between the pointers to get the area . Store the area in the reault vector and return the maximum area
# Complexity 
Time Complexity : O(n)

Space Complexity : O(1)
