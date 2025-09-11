#include <stdio.h>

int main() 
{
int number_of_seconds;
printf("Enter the number of seconds:");
scanf("%d", &number_of_seconds);
    int hours = number_of_seconds / 3600;
    int minutes = (number_of_seconds - hours * 3600) / 60;
    int seconds = number_of_seconds - hours * 3600 - minutes * 60;
printf("%d:%d:%d\n", hours, minutes, seconds);

    return 0;
}
