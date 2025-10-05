#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int userChoice, computerChoice;

    printf("=== Rock, Paper, Scissors Game ===\n");
    printf("Choose your move:\n");
    printf("1 - Rock\n");
    printf("2 - Paper\n");
    printf("3 - Scissors\n");
    printf("Enter your choice: ");
    scanf("%d", &userChoice);

    srand(time(NULL));
    computerChoice = rand() % 3 + 1;

    printf("Computer chose: ");
    if (computerChoice == 1) printf("Rock\n");
    else if (computerChoice == 2) printf("Paper\n");
    else printf("Scissors\n");

    if (userChoice == computerChoice) {
        printf("It's a tie!\n");
    } else if (
        (userChoice == 1 && computerChoice == 3) ||
        (userChoice == 2 && computerChoice == 1) ||
        (userChoice == 3 && computerChoice == 2)
    ) {
        printf("You win!\n");
    } else {
        printf("Computer wins!\n");
    }

    return 0;
}

