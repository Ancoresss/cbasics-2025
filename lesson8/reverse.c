#include <stdio.h>
int main() {

int numbers[5] = {};
printf("enter 5 numbers: ");
scanf("%d", &numbers[0]);
scanf("%d", &numbers[1]);
scanf("%d", &numbers[2]);
scanf("%d", &numbers[3]);
scanf("%d", &numbers[4]);

for (int i = 4; i >= 0; i--) {
	printf("%d\n", numbers[i]);
}





	return 0;
}
