#include <stdio.h>

int main()
{

    int numbers[10];
    int even = 0;
    int odd = 0;

    printf("Enter ten numbers: ");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]); 
        
        if (numbers[i] % 2 == 0) {
            even = even + 1;
            
        }
           else { odd = odd + 1;
            
           }
        }
    
   
    printf("the even numbers: %d\n", even);
    printf("the odd numbers: %d\n", odd);
    
    return 0;
}
