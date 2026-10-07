# Leetcode 125 Valid Palindrome 
# Explanation 
In this problem we are given a string s and we
need to return true if the string is a palindrome 
or return false otherwise 
# Intuition 
We use two pointer approach in this problem. We initialize two pointers lower and higher at the beginning and at the end of the string and check for palindromes .
# Algorithm 
1. Initialize two pointers lower and higher with 0 and n - 1 respectively
2. compare and check if the the pointers point to numbers if so then skip them
3. Compare both the elements if they match increment lower and decrement higher
4. if the they don't match then return false
# Complexity 
Time Complexity : O(log(n))

Space Complexity : O(1)
