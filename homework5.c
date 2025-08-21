#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main() {
int a;
int b;
int c;
printf("Enter first number:");
scanf("%d", &a);
printf("Enter second number:");
scanf("%d", &b);
printf("Enter third number:");
scanf("%d", &c);
	if (a==b || a==b) { //if there is aspon jedna rovnost
		if (b>=c) {
		printf("The largest number is:%d\n", b);
	}       else {
                printf("The largest number is:%d\n", c);	
      }} else if (a>b) {
                if (c>a) {
		printf("The largest number is:%d\n", c);
	}       else{
		printf("The largest number is:%d\n", a);
	}} else {
		if(c>b) {
		printf("The largest number is:%d\n", c);
	}       else {
		printf("The largest number is:%d\n", b);
	}}
return 0;

}
