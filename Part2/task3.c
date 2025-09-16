#include <stdio.h>

int main ()
{

    int numbers[] = {3600, 60, 1};
    int times[3] = {0};

    int total;
    printf("Enter the seconds: ");
    scanf("%d",&total);

    for (int i = 0; i < 3; i++) {
        times[i] = total / numbers[i];
        total %= numbers[i];
    }

    printf("your time is:\n");

    printf("%d:%d:%d\n",times[0], times[1], times[2]);


    return 0;

}