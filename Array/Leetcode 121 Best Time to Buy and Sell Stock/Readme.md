# Leetcode 121 Best Time to Buy and Sell Stock
# Explanation 
Here we are given an array of prices of a stock 
on each day and we need to find a single day to 
buy and sell stock in the future to earn maximum 
profit 
# Intuition 
Initialize two integers buy and profit set them to prices[0] and 0 respectively then start a iterative loop to compare the prices and find the maximum profit
# Algorithm 
1. Initialize two integers buy and profit with prices[0] and 0 respectively
2. Start a from loop beginning from 1
   
● Compare the buy and prices[i] if it is less than buy update buy

● Compare the profit with prices[i] - buy 
if it is more than profit update profit

# Complexity 
Time Complexity : O(n)

Space Complexity : O(1)
