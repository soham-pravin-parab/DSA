# Linked List Cycle (Leetcode 141)
## Explanation 
In this problem we are given the head of a 
Linked List we have to return true if there
is a cycle or false if there isn't .
A cycle exist if a node can be reached again
by continuously following the next pointer 
for this we declare two pointers that is slow 
and fast the slow pointer moves by one node and the
fast moves by two nodes if they both meet we 
return true.
