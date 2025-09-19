#include <stdio.h>
#include <string.h>

char used_letters[30];
char word[] = "grandmother";
int len_of_word = sizeof(word);
int empty = sizeof(word);
int count_of_correct_letters = 0;
int count_of_tryes = sizeof(word);
int count_of_used_letters = 0;
int count_of_match;
int exessive = 0; 


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
        printf(" %c", i);
    }
} // убирає з списку доступних і виводить

void entry_field(char letter, char stroka[]){
    empty = 0;
    for (int i = 0; i < len_of_word - 1; i++){
        if (word[i]==letter){
            for(int j = 0; j < len_of_word - 1; j++){
                if(used_letters[j] == letter){
                    exessive++;
                } else {
                    stroka[i] = letter;
                    count_of_correct_letters++;
                    break;
                }
            }
        } 
    }
    
    if(count_of_correct_letters == 0 || exessive > 0){
            printf("Here is no this letter or you already found this letter\n");
            count_of_tryes--;
    } else {
        printf("Congratulations! You found a letter\n");
    }
    
    for (int i = 0; i < len_of_word - 1; i++){
        if(stroka[i]=='_'){
            empty++;
        }
    }
    
    for (int i = 0; i < len_of_word - 1; i++){
        printf(" %c", stroka[i]);
    }
    used_letters[count_of_used_letters] = letter;
    count_of_used_letters++;
    count_of_correct_letters = 0;
    exessive = 0;
    
} // визначає місце де має бути буква, виводить те що вже розгадано або ще ні і шо вона ще тіки не робить


int main()
{
char current_letter;
char stroka[len_of_word];
    for (int j = 0; j < len_of_word - 1; j++){
        stroka[j] = '_';
    }
    
printf("Welcome to the game, Hangman!\n");
printf("I guess the word which have %d letters\n", len_of_word);
while(empty != 0 && count_of_tryes > 0){
    printf("List of available letters: ");
    available_letters();
    printf("\n");
    printf("You have %d tries\n", count_of_tryes);
    printf("Enter your letter: ");
    scanf(" %c", &current_letter);
    entry_field(current_letter, stroka);
    printf("\n");
    } 
if(empty == 0){
    printf("You won!\n");
} else {
    printf("You use all of the tryes\n");
}

    return 0;
}
