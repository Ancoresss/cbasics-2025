#include <stdio.h>

int calc_of_word(char my_str[]) {
    int a = sizeof(my_str);
    return a;
}

int main() {
    int calc_of_word(char my_str[]);
    char my_str[] = "Hello";
    int result = calc_of_word(my_str);
    printf("Size of the word: %d\n", result);
    return 0;
}
