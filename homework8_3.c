#include <stdio.h>

int main()
{
	int positive = 0;
	int negative = 0;
	int zero = 0;
	int nums[12] = {5, -2, 7, 0, 14, 8, -3, 10, 6, 1, -5, 9};

	for (int i = 0; i < 12; i++ ) {
		if (nums[i] > 0) {
			positive++;

		}
		if (nums[i] < 0) {
			negative++;

		}
		if (nums[i] == 0) {
			zero++;
		}
	}

	printf("Positive numbers: %d\n", positive);
	printf("Negative numbers: %d\n", negative);
	printf("Zero numbers: %d\n", zero);

	return 0;
}

