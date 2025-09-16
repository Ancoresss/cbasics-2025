#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
        int size=0;
        printf("Enter a size of password: \n");
		scanf(" %d", &size);
		char password[size + 1];
		srand(time(NULL));
	
	for (int i = 0; i < size; i++) {
		int random = rand() % 94 + 1;
		password[i] = random + 32;
	}
	password[size] = '\0';
	printf("Your password: %s ", password);
	return 0;
}
