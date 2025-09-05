#include <stdio.h>

int main() {
char letter;

printf("Write one letter: ");
scanf(" %c", &letter);

if ((letter >= 'A' && letter <= 'Z') || (letter >= 'a' && letter <= 'z')) {

if (letter >= 'A' && letter <= 'Z') {
letter = letter + 32;
}

if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u') {
printf("Vowel\n");

} else {
printf("Consonant\n");
}

} else {
printf("Input value is not a letter\n");
}
}
									  
