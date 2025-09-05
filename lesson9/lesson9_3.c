#include <stdio.h>
int sumColumn( int a[3][3]){
    int b;
    int suma=0;
    
    do{
       printf("Enter the column from first to third: ");
       scanf("%d", &b); 
    }  while(b<1 || b>3);
    
    for(int i=0; i<=2; i++){
        int j=b-1;
        suma+=a[i][j];
    }
    
    return suma;
}

int main(){
int array[3][3]={{1, 2, 3},{4, 5, 6},{7, 8, 9}};
printf("%d\n", sumColumn(array));

return 0;
    
    
}
