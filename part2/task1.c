#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main() {

	
int min = 1;
int max = 100;


int guess;
srand(time(NULL));
int secretnum = (rand() % (max - min + 1)) + min;


while(true) {

   printf("Enter a number between 1-100: ");
   if (scanf("%d", &guess) != 1) {
       printf("Please enter a number\n");
       while (getchar() != '\n');
       continue;
   }

   if (guess > secretnum) {
        printf("Try a smaller number\n");
   } else if (guess < secretnum) {
        printf("Try a bigger number \n");
   } else if (guess > max || guess < min) {
        printf("Please enter a number within the suggested range\n");
   } else if (guess == secretnum) {
        printf("You won!\n");
	break;
   }
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
return 0;
}
