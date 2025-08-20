#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main() {
float a;
float b;
float c;
printf("Enter first number:");
scanf("%f", &a);
printf("Enter second number:");
scanf("%f", &b);
printf("Enter third number:");
scanf("%f", &c);
	if (a==b || a==b) { //if there is aspon jedna rovnost
		if (b>=c) {
		printf("The largest number is:%f\n", b);
	}       else {
                printf("The largest number is:%f\n", c);	
      }} else if (a>b) {
                if (c>a) {
		printf("The largest number is:%f\n", c);
	}       else{
		printf("The largest number is:%f\n", a);
	}} else {
		if(c>b) {
		printf("The largest number is:%f\n", c);
	}       else {
		printf("The largest number is:%f\n", b);
	}}
return 0;

}
