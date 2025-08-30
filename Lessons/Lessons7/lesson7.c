#include <stdio.h>
int main(){
	char letter;
	printf("Write a letter: ");
	scanf("%c", &letter);
	char c = letter;
	
	if (c >= 'x' && c <= 'z'){
		 c = c - 23;
	}
	else {
		c = c + 3;
	}
	printf("New letter: %c\n", c);
}
