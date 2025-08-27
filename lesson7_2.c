#include <stdio.h>

int main() {
    int n;
    printf("Enter the height: ");
    scanf("%d", &n);
   
    for (int i=1; i <= n; i++) {
        for (int j = 0; j < n-i; j++) {
	    printf(" ");
	}
	for (int a=0; a<2*i -1; a++){
             printf("*");
	}
	printf("\n");
    }
    
         



}
