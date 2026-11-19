# Leetcode 852 Peak Index in a Mountain array
# Explanation 
In this problem we are given a Mountain array of length n in which
the values go on increasing to peak element and then decrease 
# Intuition 
We solve this code using Binary search 
# Algorithm 
1. We initialize two integers with high and low with n-1 and 0 respectively
2. Then initialize a while loop till low<high
3. Calculate mid and compare to see if arr[mid] < arr[mid+1] then update low = mid+1 else update high = mid
# Complexity 
Time Complexity : O(n)

Space Complexity : O(n)



