#include <stdio.h>
#include <math.h>

int main(){
  int a, b;
  float average;

  printf("Entered first number: ");
  scanf("%d", &a);

  printf("Entered second number: ");
  scanf("%d", &b);

  average = (a + b) / 2.0;
  printf("Average = %.2f\n", average);

 return 0;

  }

