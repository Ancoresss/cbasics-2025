#include <stdio.h>
#include <math.h>

int main() {
	double a, b;

	printf("Vedi dva chisla:");
	scanf("%lf %lf", &a, &b);

	printf("Korin s %.2f = %.2f\n", a, sqrt(a));
	printf("Korin s %.2f = %.2f\n", b, sqrt(b));

	return 0;

}
