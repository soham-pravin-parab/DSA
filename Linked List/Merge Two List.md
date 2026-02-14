# Merge Two List (Leetcode 21)
## Explanation 
The code recursively merges the two list
by first handling the base case if either
head is null return the other . It compares
head1 -> val and head2 -> val the smaller one becomes 
the new head and its next recursively merges 
the remainder with the larger head .
