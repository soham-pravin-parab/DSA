# N-Queens 
# Explanation 
The N-Queens problem requires us to place
n queens on an N×N board such that no queen
shares the same row , column, or diagonal 
with another. This code uses vector of strings
to represent the board,  where ' . ' is empty
and 'Q' is a queen.
# Intuition 
Create a bool function to check if the the position is valid in the bool function we need to initialize 3 for loops first to check the rows then column then diagonals . Then in the main function call the bool function and place Q if it gives true .
# Algorithm 
# Complexity 
Time Complexity : O(n)

Space Complexity : O(1)
