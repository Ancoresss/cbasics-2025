#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
srand(time(NULL));
int a = 1 + rand() % 100;
int b;
printf("Enter your number from 1 to 100: ");
scanf("%d", &b);
    do{
        if(b>a){
            printf("The number is too big. Enter another number: ");
            scanf("%d", &b);
        } else {
            printf("The number is too small. Enter another number: ");
            scanf("%d", &b);
        }
        
    } while(b!=a); 
     printf("You find the correct number!\n");

    return 0;
}
