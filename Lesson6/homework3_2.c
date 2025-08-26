#include <stdio.h>

int main() {
	int n;
	int suma = 0;
	char symbol;
	  printf("Enter kilkist liter: \n");
	  scanf("%d",&n);

	    for ( int i = 0; i < n; i++) {
	    	scanf(" %c",&symbol);
		suma += symbol;
	    }
	printf("Suma ASCII-kodiv ysich symbol= %d \n",suma);
}
