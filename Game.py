# tic tac toe game with numbers



board=[0,0,0,0,0,0,0,0 ,0]
player = 'A' #with this we'll know which player's turn it is

#printing the game board
def tic_tac_toe ():
    print ('|' ,board[0],'|',board[1] ,'|', board[2],'|')
    print ('--------------')
    print ('|' ,board[3],'|',board[4] ,'|', board[5],'|')
    print ('--------------')
    print ('|' ,board[6],'|',board[7] ,'|', board[8],'|')


#this function will move the number input in the place we choose from the indexes of the list (game board )

def move(x1,x2):
    board[x2] = x1
    tic_tac_toe()

# check if the input number is odd or not

def odd (x, x2):

    while  (x%2==0):
        x = int(input ('enter an odd number'))
        if x>8:
            print("enter number in range [0:7]")

    #Nothing here because if we get out of the while is because it's a valid number (we're not checking numbers out of range or anything)
    move (x ,x2)

# check if the input number is even or not

def even (x ,x2) :

    while  (x%2!=0):
        x = int(input ('enter an even number'))
        if x > 8:
            print("enter number in range [0:8]")
            x = int(input('enter an even number'))

    #Same here
    move (x ,x2)

#check for the winner

def winner ():
    if ((board[0]+board [1]+board[2]>=15 or
        board[0]+board [3]+board[6]>=15 or
        board[1]+board [4]+board[7]>=15 or
        board[3]+board [4]+board[5]>=15 or
        board[2]+board [5]+board[8]>=15 or
        board[6]+board [7]+board[8]>=15)) :
        print ('you are the winner')
        print("congratulations ")
        return True #To know if we need to stop the game

    else:
        return False

# to switch the players and taking turns

def turn(s):
    print ('its '+ s +' turn')
    x = int (input ('enter number to play with : '))
    x1 = int (input ('enter the place number: '))

    if player == 'A':
        even(x, x1)
    else:
        odd(x, x1)

print('Tic Tac Toe')
print("Each player has two inputs the first input is  for the number he wants to play with "
      "(player [a] plays by even numbers and player [b] play with odd numbers )"
      "the second input is for the place he wants to play in from [0,1,2,3,4,5,6,7,8]  in the game board .")

print ('player A should enter even numbers only'+' and player B should enter odd numbers only')

print ('player A should enter even numbers only'+' and player B should enter odd numbers only')
print ('the player with the odd numbers start')

tic_tac_toe ()

while True:      #to continue the game
    turn(player)
    if winner():
        break
    else:
        if player == 'A':
            player = 'B'
        else:
            player = 'A'

