#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

/* write a function here that determines whether the game will be between a 
computer vs player or player vs player will be a simple if statement that 
will lead to seperate sequences for each option. */ 


/* write a function for displaying the board as well as assigning numbers
to the open parts of the table so that inputing O's and X's are easier */

    char player;
    char square[10] = {'0','1', '2', '3', '4', '5', '6', '7', '8', '9' };

                    


void board()
{
    printf("\n\n\tTic Tac Toe\n\n");

    if (player == '1'){
    printf("Player 1 (X)  -  Computer (O)\n\n\n");
    }
    else {
        printf("Player 1 (X)  -  Player 2 (O)\n\n\n");
    }

    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", square[1], square[2], square[3]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", square[4], square[5], square[6]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", square[7], square[8], square[9]);

    printf("     |     |     \n\n");
}


/* write a function to add in the X's and O's into the respective slots that
the player and/or computer picks*/

void opponentPlayer()
{
    printf("the opponent has been confirmed to be another player");
}

void opponentComputer()
{
    printf("the opponent has been confirmed to be the computer");
}

/* write a function that checks the win conditions if a row, column, or diagnal is 
filled with the same caracters */

/* write a function that checks if all of the slots are filled up. if all the slots are 
filled up and none of the win conditions are met print out "draw" */


/*write a algorithym for the computer to check if a spot is empty and input a move
if that spot is empty otherwise find an open spot and input. */

/*write a function to switch the turn from P to P and from C to P*/


/*end program*/

 int main()
{    
printf ("Enter your choice of opponent \n 1 for a computer \n 2 for another player ");

player = getchar();
if(player == '1' ) {
    opponentComputer();
}
if(player == '2' ) {
    opponentPlayer();
}

board();


}          