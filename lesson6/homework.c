#include <stdio.h>
int main(){

    int A, B;
    int sum = 0;

    printf("Enter two numbers A and B:");
    scanf("%d %d", &A, &B);

    if (A > B){
        printf("Wrong sequence.\n");
	return 0;
    }

    for (int i = A; i <= B; i++ ) {

     
	 if (i % 2 == 0) {

		 sum += i;
	 }  
    }


    printf("Sum of even numbers = %d\n", sum);

    return 0;
}
