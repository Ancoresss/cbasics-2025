#include <stdio.h>
#include <math.h>

int main(){
  int number1;
  int number2;
  int result;

  printf("Enter the first number: ");
  scanf("%d", &number1);
  printf("Enter the second number: ");
  scanf("%d", &number2);
  result = number1 - number2;
  printf("The difference is: %d\n", result);

  return 0;
}
