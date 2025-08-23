#include <stdio.h>

 int main () {
 int a;
 int b;
 int c;

 printf("Enter first number: ");
 scanf("%d", &a);

 printf("Enter second number: ");
 scanf("%d", &b);

 printf("Enter third number: ");
 scanf("%d", &c);
 int max;

 if ( a >= b && a >= c) {
 max = a;

 } else if ( b >= a && b >= c) {
 max = b;

 } else {
  max = c;


 }

 printf("Max number: %d\n", max);





 }

