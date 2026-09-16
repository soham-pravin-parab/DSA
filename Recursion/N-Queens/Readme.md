# N-Queens 
# Explanation 
The N-Queens problem requires us to place
n queens on an N×N board such that no queen
shares the same row , column, or diagonal 
with another. This code uses vector of strings
to represent the board,  where ' . ' is empty
and 'Q' is a queen.
# Intuition 
Create a bool function to check if the the position is valid in the bool function we need to initialize 3 for loops first to check the rows then column then diagonals . Then in the main function call the bool function and place Q if it gives true and keep on recursively calling it .
# Algorithm 
1. Initialize a bool function
  ● Initialize a for loop to check if there is a Q in the same row if there is return false similarly do it for column
  ● Then Initialize a backward for loop for two integers and check the place of both the integers this performs a check for the diagonal
2. Call the bool function in the main function and keep it running recursively
3. If it gives true then place the Q in that position
    # Complexity 
Time Complexity : O(n)

Space Complexity : O(1)
