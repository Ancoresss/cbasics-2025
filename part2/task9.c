#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
int a;
int n;

printf("Enter the count of symbols(min count is 3): ");
scanf("%d", &a);

while(a < 3){
    printf("Enter the count of symbols(min count is 3): ");
    scanf("%d", &a);
    
}
printf("Generating may take some time to do your password more uniqe...\n");
srand(time(NULL));

    int b = 65 + rand() % 25;
    printf("%c", b);
    
    int c = 48 + rand() % 10;
    printf("%c", c);

    switch (rand() % 8){
        case 0:
            printf("#");
            break;
        case 1:
            printf("$");
            break;
        case 2:
            printf("&");
            break;
        case 3:
            printf("-");
            break;
        case 4:
            printf("_");
            break;
        case 5:
            printf("*");
            break;
        case 6:
            printf(".");
            break;
        case 7:
            printf("@");
            break;
    }
    
for (int i = 0; i < a-3; i++){
    sleep(1);
    b = rand() % 4;
    if (b == 0){;
        b = 65 + rand() % 25;
        printf("%c", b);
    } else if (b == 1){
        c = 48 + rand() % 10;
        printf("%c", c);
    } else if (b == 2){
        n = 97 +rand() % 25;
        printf("%c", n);
    } else {
        switch (rand() % 8){
            case 0:
                printf("#");
                break;
            case 1:
                printf("$");
                break;
            case 2:
                printf("&");
                break;
            case 3:
                printf("-");
                break;
            case 4:
                printf("_");
                break;
            case 5:
                printf("*");
                break;
            case 6:
                printf(".");
                break;
            case 7:
                printf("@");
                break;
        }
    }
}
printf("\n");
    return 0;
}
