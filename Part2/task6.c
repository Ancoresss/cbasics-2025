#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    char symbol;
    printf("Enter your symbol:  \n");
    printf("'k' for rock, 's' for scissors, 'p' for paper\n");
    scanf(" %c", &symbol);
    int random;
    srand(time(NULL));
    random = rand() % 3;
    char randomSymbol;
    if (random == 0) {
        randomSymbol = 'k';
    } else if (random == 1) {
        randomSymbol = 's';
    } else {
        randomSymbol = 'p';
    }
    if (symbol == randomSymbol) {
        printf("It's a draw! Both chose %c\n", symbol);
    } else if ((symbol == 'k' && randomSymbol == 's') ||
               (symbol == 's' && randomSymbol == 'p') ||
               (symbol == 'p' && randomSymbol == 'k')) {
        printf("You win! You chose %c and the computer chose %c\n", symbol, randomSymbol);
    } else if ((symbol == 'k' && randomSymbol == 'p') ||
               (symbol == 's' && randomSymbol == 'k') ||
               (symbol == 'p' && randomSymbol == 's')) {
        printf("You lose! You chose %c and the computer chose %c\n", symbol, randomSymbol);
    } else {
        printf("Invalid input! Please choose 'k', 's', or 'p'.\n");
    }
    return 0;
}