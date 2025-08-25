#include <stdio.h>

int main() {
    int height;

    printf("Введіть висоту ялинки: ");
    scanf("%d", &height);

    
    for (int i = 1; i <= height; i++) {
        // %*s друкує (height - i) пробілів
        printf("%*s", height - i, "");
        
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    
    int center = height / 2 + 1; 
    for (int i = 0; i < 2; i++) { 
        printf("%*s|\n", center, "");
    }

    return 0;
}
