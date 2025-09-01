#include <stdio.h>

int main() {
	int age = 23;
	int ages[5] = {43, 12, 5, 9, 38}; //segmentation fault
	int random_numbers[] = {4, 5, 10};

	ages[2] = 10;

	printf("%d\n", ages[2]);

	return 0;
}
