#include <stdio.h>
#include <string.h>
#include <time.h>

#define MAX_ATTEMPTS 6
#define WORD_LENGTH 30

// 1) попитки
// 2) вільні букви
// 3) букви які ввели

// word
char used_letters[WORD_LENGTH] = {0};

void available_letters() {
    for (int i = 97; i <= 122; i++) {
        int a = 0;
        for (int j = 0; j < strlen(used_letters); j++) {
            if (used_letters[j] == i) {
                a = 1;
                break;
            }
        }
        if (a == 1) {
            a = 0;
            continue;
        }
        printf("%c", i);
    }
}

int is_win(char guessed_word[]) {
    for (int i = 0; i < strlen(guessed_word); i++) {
            if (guessed_word[i] == ' ') {
                return 0;
            }
        }
        return 1;
}

int play(char word[]) {
    int attempts = MAX_ATTEMPTS;
    char guessed_word[WORD_LENGTH] = {0};
    for (int i = 0; i < strlen(word); i++) {
        guessed_word[i] = ' ';
    }

    while (attempts > 0) {
        printf("You have %d attempts left.\n", attempts);
        printf("Current word: %s\n", guessed_word);
        printf("Enter a letter: ");
        char guess;
        scanf(" %c", &guess);

        int already_used = 0;
        for (int i = 0; i < strlen(used_letters); i++) {
            if (used_letters[i] == guess) {
                already_used = 1;
                break;
            }
        }
        if (already_used) {
            printf("You already used that letter. Try again.\n");
            continue;
        }

        
        for (int i = 0; i < WORD_LENGTH; i++) {
            if (used_letters[i] == 0) {
                used_letters[i] = guess;
                break;
            }
        }

        
        int correct_guess = 0;
        for (int i = 0; i < strlen(word); i++) {
            if (word[i] == guess) {
                guessed_word[i] = guess;
                correct_guess = 1;
            }
        }

        if (!correct_guess) {
            attempts--;
            printf("Wrong guess!\n");
        } else {
            printf("Good guess!\n");
        }

        if (is_win(guessed_word)) {
            printf("Congratulations! You've guessed the word: %s\n", word);
            return 1;
        }
    }

    printf("Sorry, you've run out of attempts. The word was: %s\n", word);
    return 0;
}

int main()
{
    printf("Welcome to the game, Hangman!\n");
    play("word");
    return 0;
}