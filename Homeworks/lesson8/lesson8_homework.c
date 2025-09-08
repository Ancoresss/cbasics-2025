#include <stdio.h>
int main() {
    printf("Insert a number:\n");
    
        int number[] = {3, 8, 2, 7, 5, 1, 4, 9, 6, 10};
        int search_number;
         scanf("%d", &search_number);
        for (int i = 0; i < 10; i++) {
        
        if (number[i] == search_number){
            printf("Found!\n");
            break;
        }
        else
        {
            printf("Did not found!\n");
            break;
        }
        }
        return 0;

}
