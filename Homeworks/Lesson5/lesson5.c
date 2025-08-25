#include <stdio.h>
#include <stdbool.h>
int main () {
	char rock = 'r';
	char paper = 'p';
	char scissors = 's';
    char player1, player2;
printf("Choose item for player1 (r/p/s):\n");
scanf(" %c", &player1);
printf("Choose item for player2 (r/p/s):\n");
scanf(" %c", &player2);
if  ((player1 == rock && player2 == scissors) || 
	(player1 == paper && player2 == rock) ||
   	(player1 == scissors && player2 == paper)) //all conditions under which player1 wins
{
	printf("Player1 won\n");
}

else if ((player1 == rock && player2 == paper) ||
	    (player1 == paper && player2 == scissors) ||
	   	(player1 == scissors && player2 == rock)) //all conditions under which player2 wins
{
	printf("Player2 won\n");
}
else
{
	printf("It`s a draw. Try again\n");
}
return 0;
}
