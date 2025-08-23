#include <stdio.h>
#include <math.h>

int main() {
	double a, b;
	char op;

	printf("enter the first number:");
	scanf ("%lf", &a);

	printf("enter the second number:");
	scanf("%lf", &b);

	printf("conduct the operation(p, k, m): ");
	scanf(" %c", &op);

	double result;

	switch (op) {
		case 'p':
		result = pow (a, b);
		printf("result: %.2lf\n", result);
		break;

		case 'k':
		result = pow(a, 2) + pow(b,2);
		printf("result: %.2lf\n", result);
		break;

		case 'm':
		if (a < b)
			result = a * (b / 2.0);
		else
			result = b * (a / 2.0);
		printf("result: %.2lf\n", result);
		break;

		default:
		printf("You need to use n, k and m. \n");
	}
	

       return 0;





}
