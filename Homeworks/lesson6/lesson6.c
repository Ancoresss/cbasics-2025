#include <stdio.h>

int main() {
    for (int i = 2; i <= 100; i++) {
        int isNumberSimple = 1;

        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                isNumberSimple = 0;
                break;
            }
        }

        if (isNumberSimple) {
            printf("%d\n", i);
        }
    }

    return 0;
}

