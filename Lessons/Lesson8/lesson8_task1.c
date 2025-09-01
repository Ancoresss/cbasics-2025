#include <stdio.h>

int main() {
	int nums[] = {10, 11, 13, 15, 1, 5, 2, 3}
	int suma = 0;

	for (int i = 0; i < 8; i++) {
		suma += nums[i];
		suma += 10;
	}

	printf("%d\n", suma);

	return 0;
}

