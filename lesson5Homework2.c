#include <stdio.h>
#include <math.h>

#include <stdio.h>

int main() {

    int a, b, c;

    // Введення сторін трикутника

    printf("Введіть три сторони трикутника: ");
    scanf("%d %d %d", &a, &b, &c);

    // Перевірка, чи можна скласти трикутник

    if (a + b > c && a + c > b && b + c > a) {

        // Визначення типу трикутника

        if (a == b && b == c) {
            printf("Рівносторонній\n");
        } else if (a == b || a == c || b == c) {
            printf("Рівнобедрений\n");
        } else {
            printf("Різносторонній\n");
        }

    } else {
        printf("Трикутник не існує\n");
    }

    return 0;
}

