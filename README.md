# Tic-Tac-Toe-with-numbers

Description: tic tac toe game 
In order to print the game board so I decided to make a list of “9” indexes, each index represents the place that the player will play in it.
as in python, we don’t have to declare the indexes types but I put the indexes all numbers to let the user input the number that he wants to play within the position of the index.

Function for the game board 
After that, I make a function to make the shape of the real game board.

Function that takes two parameters and swap them one for the place that the user wants to play in and the number that the user wants to play with (the place the player wants to play in will be the index number that the user will play with and the number that the user wants to play with will be the number that will be put in the index)
For defense two functions to check if the input number is even or odd as the first player will play with odd numbers only and the second player will play with even numbers only.

After that we call the move () function to take the two parameters one for the place and the other for the number to play with.

So I make a function to check for the winner with all possibilities and if any player wins I will stop the game (return True, Inorder to know if we need to stop the game)

And if not I will continue the game (return False)

And a function to switch player if there isn’t any player wins.

Done By : Reem Walid

Faculy of computers & artificial intelligence, Cairo University.

Under the supervision of : DR Mohamed El-Ramly
