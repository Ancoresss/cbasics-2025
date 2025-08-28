#include <stdio.h>
#include <math.h>

int main() {
  float number;

  printf("Enter the number: ");
  scanf("%f", &number);
  number = number*3;
  printf("Result:%f\n", number);

  return 0;
}
