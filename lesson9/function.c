#include <stdio.h>

int sumRow(int arr[3][3], int row) {
     int suma;
     for (int i = 0; i < 3; i++) {
          suma += arr[row][i]; 
     }
return suma;
}




int main() {

int numbers[3][3] = {
     {6, 3, 1},
     {5, 2, 7},
     {3, 24, 54}
};

int result = sumRow(numbers, 1);
printf("%d\n", result);



     return 0;
}
