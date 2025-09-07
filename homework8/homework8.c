#include <stdio.h>

int countEven(int arr[3][3]) {
    int count = 0;


    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] % 2 == 0) {
                count++;
            }
        }
    }

    return count;
}

int main() {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int result = countEven(matrix);
    printf("number of even numbers: %d\n", result);

    return 0;
}