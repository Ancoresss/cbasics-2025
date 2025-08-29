#include <stdio.h>

int main () {
	char riadok[51];
	int suma = 0;
	   printf("Enter riadok: \n");
	   scanf("%s", riadok);
	     for (int i = 0; riadok[i] != '\0'; i++) {
			if (riadok[i] == 'a') {
				suma++;
			}	
	     } 
	     printf("Number a: %d \n", suma);
}
