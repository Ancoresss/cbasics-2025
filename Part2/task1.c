#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int attempts = 0;
    int guess = 0;
    int number = 0;
    srand(time(NULL));

    number = rand() % 100 + 1;
    
    printf("Welcome to the Number Guessing Game!\n");
    printf("Try to guess the number between 1 to 100.\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts ++;
        if (guess > number) {
            printf("Too high!\n");
        } else if (guess < number) {
            printf("Too low!\n");
        } else {
            printf("Congratulations! You've guessed the number %d in %d attempts.\n", number, attempts);
        }
    } while (guess != number);

     printf("Thank you for playing!\n");
    return 0;
}