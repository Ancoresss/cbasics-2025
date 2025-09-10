#include <stdio.h>

double averageMatrix(int arr[3][3]);

int main() {
    double result;
     int matrix [3][3] = 
    {
        {5, 3, 7},
        {6, 4, 2},
        {8, 1, 9}
    };
     result = averageMatrix(matrix);
        printf("Average of matrix: %.2f\n", result);
    return 0;
    
}
double averageMatrix(int arr[3][3])
{
    double suma = 0;
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            suma += arr[i][j];
        }
    }
        return suma / 9.0;
    }

