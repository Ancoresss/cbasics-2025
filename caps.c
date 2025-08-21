#include <stdio.h>
#include <ctype.h>

int main() {

char letter;

printf("Input a letter: ");
scanf("%c", &letter);

if (isupper(letter)) {
	printf("big\n");
} else if (islower(letter)) {
	printf("small\n");
} else {
	printf("Input value is not a lettter\n");
}
}
