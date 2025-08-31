#include <stdio.h>

int main()
{
    int nums[10] = {2, 44, 32, 61, 23, -14, 14, 57, 81, 12};
    int suma = 0;
    for (int i = 0; i < 10; i++){
        suma = suma + nums[i];
    }
  
    double avg =suma / 10.0;
    
    printf("all numbers: %d\n", suma);       

    return 0;
}
