#include <stdio.h>
int main() {
	char word[100];
	int suma = 0;
	int kilkist = 0;
	   printf("Enter text: \n");
	   scanf("%s",word);
	   	while(word[kilkist] != '\0') {
			suma += word[kilkist];
			kilkist++;
		}
        printf("Suma ASCII-kodiv ysich symbol= %d \n",suma);
return 0;
}
