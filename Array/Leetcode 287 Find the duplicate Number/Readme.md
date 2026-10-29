# Leetcode 287 Find the duplicate 
# Explanation 
In this problem we have been given a array of nums
containing n+1 integers where each integer has a range of
[1,n] there is on one repeated number and we have to return that number
# Intuition 
We use the Floyd's tortoise and hare Algorithm in this
# Algorithm 
1. Initialize two pointers as fast and slow Initialize both of them with the value of the first element
2. Run an infinite while loop where slow = 
nums[slow] and fast = nums[nums[fast]]
3. Keep checking constantly of they both match
4. Run another while loop to check that they match 
# Complexity 
Time Complexity : O(n)

Space Complexity : O(1)
