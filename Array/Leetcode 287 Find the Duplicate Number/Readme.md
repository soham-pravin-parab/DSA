# Leetcode 287 Find the Duplicate Number 
# Explanation 
In this problem we have a array of integers 
called as nums containing n+1 integers where each 
integer is in a range [1,n] inclusive there is 
only one repeated number in the array we need to return that number
# Intuition 
We use Floyd's cycle in this . We first declare two pointers run them infinity until we find the duplicate the run another loop to confir and then we return that element. 
# Algorithm 
1. Declare two variables fast and slow
2. Initialize a infinite while loop and keep shifting the fast twice and slow only once terminate it when the two match
3. Again Initialize a while loop just to check that the elements match
4. return those elements 
# Complexity 
Time Complexity : O(log(n))

Space Complexity : O(1)
