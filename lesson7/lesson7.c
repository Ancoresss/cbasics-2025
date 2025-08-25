#include <stdio.h>

int main () {

	int h;

	printf("Enter height: ");

        scanf("%d", &h);	

	for (int i = 0; i < h; i++) {

	  putchar(' ');


	for (int s = 0; s < i; s++) {
	
	putchar(' ');

	}

        for (int k = 0; k < 2 * (h - i) - 1; k++ ) {
	
	putchar('*');

	}
	putchar('\n');
}

}
