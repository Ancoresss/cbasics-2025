#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getuserschoice(){
   int choice = 0;
   while(choice < 1 || choice > 3){
       printf("Choose an option\n");
       printf("1-ROCK, 2-PAPER, 3-SCISSOR\n");
       printf("Enter your choice:");
       scanf("%d", &choice);
   }
   return choice;
}

int getcomputerschoice(){
   return (rand() % 3) + 1;
}

void winner(userchoice, computerchoice){
   if (userchoice == computerchoice) {
      printf("tie\n");
   } else if (userchoice == 1 && computerchoice == 3) {
      printf("you win\n");
   } else if (userchoice == 2 && computerchoice == 1) {
      printf("you win\n");
   } else if (userchoice == 3 && computerchoice == 2) {
      printf("you win\n");
   } else {
      printf("you lose\n");
   }
}

int main() {

int userchoice = getuserschoice();
int computerchoice = getcomputerschoice();

switch(userchoice){
case 1:
  printf("you chose rock\n");
  break;
case 2:
  printf("you chose paper\n");
  break;
case 3:
  printf("you chose scissors\n");
  break;
}

switch(computerchoice){
case 1:
  printf("computer chose rock\n");
  break;
case 2:
  printf("computer chose paper\n");
  break;
case 3:
  printf("computer chose scissors\n");
  break;
}

winner(userchoice, computerchoice);


return 0;
}


