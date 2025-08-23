#include <stdio.h>
#include <math.h>
#include <stdbool.h>

  int main () {
  float num1, num2, result;
  char op;


printf("Enter first number: ");
scanf("%f", &num1);

printf("Enter operation (+, -, *, /): ");
scanf(" %c", &op);

printf("Enter second number: ");
scanf("%f", &num2);

  if(op == '+') { 
   result = num1 + num2;
  } else if (op == '-') { 
   result = num1 - num2;
  } else if (op == '*') { 
   result = num1 * num2;
  } else if (op == '/') { 
   result = num1 / num2;
  } else {   
   printf("Invalid operation!");
    
  }

  printf("Result: %f\n", result);

  return 0;
  
  }

