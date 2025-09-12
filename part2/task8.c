#include <stdio.h>

int main() 
{
int array1[] = {3, 7, 1, 7, 9, 4, 2, 1, 8, 3};
int a = sizeof(array1)/sizeof(array1[0]);
int array2[a];
int n = 0;
int c = 1;
array2[0] = array1[0];
for (int i = 1; i < a; i++){
    for (int j = 0; j < i; j++){
        if (array1[i] == array1[j]){
            n++;
        }  
    }
    if (n == 0){
        array2[c] = array1[i];
        c++;
    }
    n = 0;
}

for (int i = 0; i < c; i++) {
        printf("%d ", array2[i]);
}
    printf("\n");
    return 0;
}
