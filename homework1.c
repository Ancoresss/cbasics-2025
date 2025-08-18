#include <stdio.h>
#include <math.h>

int main() {
  int number;

  printf("Введіть число: ");
  scanf("%d", &number);
  number = number*3;
  printf("Результат множення: %d\n", number);

  return 0;
}
