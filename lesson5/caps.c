#include <stdio.h>

int main() {

char letter;

printf("Input a letter: ");
scanf("%c", &letter);

if (letter >= 65 && letter <= 90) {
	printf("big\n");
} else if (letter >= 97 && letter <= 122) {
	printf("small\n");
} else {
	printf("Input value is not a lettter\n");
}
}
