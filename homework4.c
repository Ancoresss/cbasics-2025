#include <stdio.h>

int main () {

float a, b, c, max;

printf("Enter first number: ");
scanf("%f", &a);

printf("Enter second number: ");
scanf("%f", &b);

printf("Enter third number: ");
scanf("%f", &c);

max = a;

if (b > max) {
	max = b;
}

if (c > max) {
	max = c;
}

printf("Highest number is: %.2f\n", max);

}
