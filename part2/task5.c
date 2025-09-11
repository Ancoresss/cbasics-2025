#include <stdio.h>

int main() 
{
int array1[]={1, 2, 3, 4, 5, 6, 7};
int array2[]={1, 4, 2, 8, 13, 6};
int a = sizeof(array1)/sizeof(array1[0]);
int b = sizeof(array2)/sizeof(array2[0]);
int reserve[a];
int count=0;
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            if (array1[i]==array2[j]){
                for(int n = 0; n < a; n++){
                    if(array1[i]!=reserve[n]){
                        printf("%d\n", array1[i]);
                        reserve[n]=array1[i];
                        break;
                    }
                }
            count++;
            break;
            }
        }
    }
    if (count==0){
        printf("There is no similar number\n");
    }
    return 0;
}
