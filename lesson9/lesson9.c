#include <stdio.h>
int minElement(int a[3][3]) {
int min =a[0][0];
    for(int i=0; i<=2; i++){
        for(int j=0; j<=2; j++){
            if (a[i][j]<min){
                min=a[i][j];
            }
        }
    }
   return min; 
    
    
}



int main(){
int array[3][3]={{1, 6, 13},{8, 7, 20},{31, -3, 5}};
printf("%d\n", minElement(array));
    
    
 return 0;   
    
}
