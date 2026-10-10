# Leetcode 169 Majority Element 
# Explanation 
In this problem we are given a array of size n
and we have to return the Majority element i.e.
we need to return the element that appears more than 
n/2 times in the array
# Intuition 
We initialize two for loops here the first for loop helps us in identifying the Majority element and the second loop helps in counting the frequency of the element
# Algorithm 
1. Initialize two variables Majority and count with nums[0] and 1 respectively
2. Start a for loop and if loop the nums[i] is equal the Majority element then increment the count and if it isn't then decrement and if the count is equal to zero then set the count to 1 and change the Majority element to nums[i]
3. Reset the count to 0 and initialize a for loop and if the nums[i] is equal to the  Majority element then increment the count if the count is greater than n/2 return the Majority element or else return -1
# Complexity 
Time Complexity : O(n)

Space Complexity : O(n)
