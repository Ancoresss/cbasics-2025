#include <stdio.h>
int sumRow(int a[3][3]) {
int b;
int suma=0;
    printf("Enter the line:");
    scanf("%d", &b);
        if (b>3 || b<=0){
            do {
                printf("Enter the line from 1 to 3:");
                scanf("%d", &b);
        }   while (b>3 || b<=0);
        }
        
    int i=b-1;
    for(int j=0; j<=2; j++){
        suma+=a[i][j];
}
    return suma;
}



int main(){
int array[3][3]={{1, 6, 13},{8, 7, 20},{31, -3, 5}};
printf("Sum of the line is: %d\n", sumRow(array));
    
    
 return 0;   
    
}
