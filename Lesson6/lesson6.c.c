#include <stdio.h>

int main() {
int a;
printf("Enter a variable: \n");
scanf("%d", &a);

switch(a) {
case 1:
printf("Monday\n");
break;
case 2:
printf("Tuesday\n");
break;
case 3:
printf("Wednesday\n");												               
break;
default:
printf("Wrong number\n");
}
}
