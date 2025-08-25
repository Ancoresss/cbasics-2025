#include <stdio.h>
#include <math.h>

int main() {
  int number;

  printf("Enter the number: ");
  scanf("%d", &number);
  number = number + 10;
  printf("Your number increased by ten: %d\n", number);

  return 0;
}

