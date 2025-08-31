#include <stdio.h>

int main() {
    int nums[10] = {3, 5, 1, 15, 8, -3, 6, 9, 10, 7};

    int max = nums[0];
    int min = nums[0];

    for (int i = 0; i < 10; i++) {
        if (nums[i] > max) {
            max = nums[i];
        }
        if (nums[i] < min) {
            min = nums[i];
        }
    }

    printf("Max number: %d\n", max);
    printf("Min number: %d\n", min);

    return 0;
}

