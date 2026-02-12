# Detect Cycle (Leetcode 142)
## Explanation 
In this problem we need to find and print
the position of cycle. We declare two pointers
slow and fast . Slow pointer advances one step
and fast pointer advance two steps at a time
as long as the fast and it's next aren't null
If slow pointer meets the fast pointer then the cycle 
exist. 
