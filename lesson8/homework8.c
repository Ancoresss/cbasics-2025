#include <stdio.h> 

int main(){
	int number;
	int sum = 0;

	do {
	   printf("print number: ");
	   scanf("%d", &number);

	   sum += number;
	} while (number != 0);

	printf("Suma = %d\n", sum);
	
	return 0;
	}
