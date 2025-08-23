#include <stdio.h>
#include <math.h>

int main() {
	int suma;
	float allsuma;
   int chislo1;
   printf("Enter chislo1: \n");
   scanf("%d", &chislo1);
   int chislo2;
      printf("Enter chislo2: \n");
         scanf("%d", &chislo2);
   int chislo3;
      printf("Enter chislo3: \n");
         scanf("%d", &chislo3);
	 suma = chislo1+chislo2+chislo3;
	 printf("Total suma:%d \n", suma);
    if (suma > 50) {
	    allsuma = suma - (suma*0.15);
     } else if (suma > 20 && suma <= 50) {
	     allsuma = suma - (suma*0.09);
     } else if (suma <= 20) {
	     allsuma = suma - (suma*0.03);
     }
    printf("Yor suma:%.2f \n",allsuma);
}
