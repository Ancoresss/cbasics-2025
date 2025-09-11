#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int main()
{
srand(time(NULL));
int a = 1 + rand() % 3;
char b[100];

        do{
            printf("Enter your choice (scissors, rock or paper):");
            scanf("%s", b);
        } while(strcmp(b, "scissors") != 0 && strcmp(b, "rock") != 0 && strcmp(b, "paper") !=0);
    // 1-paper
    // 2-scissors
    // 3-rock
        if(a==1){
            if(strcmp(b, "scissors") == 0){
                printf("You win, computer choice is paper\n");
            } else if(strcmp(b, "rock") == 0){
                printf("You lose, computer choice is paper\n");
            } else if(strcmp(b, "paper") == 0) {
                printf("Its draw, computer choice is paper\n");
            } 
            
        } else if (a==2){
            if(strcmp(b, "rock") == 0){
                printf("You win, computer choice is scissors\n");
            } else if(strcmp(b, "paper") == 0){
                printf("You lose, computer choice is scissors\n");
            } else if(strcmp(b, "scissors") == 0){
                printf("Its draw, computer choice is scissors\n");
            } 
            
        } else if (a==3){
            if(strcmp(b, "paper") == 0){
                printf("You win, computer choice is rock\n");
            } else if(strcmp(b, "scissors") == 0){
                printf("You lose, computer choice is rock\n");
            } else if(strcmp(b, "rock") == 0){
                printf("Its draw, computer choice is rock\n");
            } 
        }
    return 0;
}
