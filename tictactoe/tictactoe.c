#include <stdio.h>
#include <string.h>

int line = 0;
int uses = 0;
int move = 1;
char a;
int i, j;
int x, y;
void play(int x, int y, int move, char pool[3][3]){
    while (pool[x-1][y-1] != ' '){
            printf("There is already symbol, chose another: ");
            scanf("%d %d", &x, &y);
    }

        if (move % 2 == 0){
            pool[x-1][y-1] = 'O';
        } else {
            pool[x-1][y-1] = 'X';
        }
} // виводить розміщення символів

void plan(char pool[3][3]){    
    for (int i  = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("%c", pool[i][j]);
            if (j < 2){
                printf(" | ");
            } else if (i < 2){
                printf("\n---------\n");
            } else {
                printf("\n");
            }
        }
    }
    
    
} // виводить схему

int who_win(char pool[3][3]){
    
    for (int i = 0; i < 3; i++){ //перевіряються лінії по горизонталі та вертикалі
        j = 0;
        if (pool[i][j] == pool[i][j+1] && pool[i][j+1] == pool[i][j+2] && pool[i][j] != ' '){
            line++;
            a = pool[i][j];
            break;
        } else if(pool[j][i] == pool[j+1][i] && pool[j+1][i] == pool[j+2][i] && pool[j][i] != ' '){
            line++;
            a = pool[i][j];
            break;
        }
    }
    
    i = 0; //перевіряються лінії по діагоналі
    j = 0; 
    if(pool[i][j] == pool[i+1][j+1] && pool[i+1][j+1] == pool[i+2][j+2] && pool[i][j] != ' '){
        line++;
        a = pool[i][j];
    } 
    
    i = 2;
    j = 0;
    if(pool[i][j] == pool[i-1][j+1] && pool[i-1][j+1] == pool[i-2][j+2] && pool[i][j] != ' '){
        line++;
        a = pool[i][j];
    }
    
    return a;
} // вираховує чи є виграшна лінія та визначає хто виграв

int main(){
    
    char pool[3][3] = {
    {' ', ' ', ' '},
    {' ', ' ', ' '},
    {' ', ' ', ' '}
    };
    
    printf("Welcome to Tic Tac Toe game!\n");
    while (uses != 9 || line > 0){
        printf("player1: ");
        scanf("%d %d", &x, &y);
        while (x < 1 || x > 3 || y < 1 || y > 3){
            printf("Enter the real position: ");
            scanf("%d %d", &x, &y);
        }
        play(x, y, move, pool);
        who_win(pool);
        plan(pool);
        move++;
        uses++;
        
        if (uses == 9 || line > 0){
            break;
        }
        
        printf("player2: ");
        scanf("%d %d", &x, &y);
        while (x < 1 || x > 3 || y < 1 || y > 3){
            printf("Enter the real position: ");
            scanf("%d %d", &x, &y);
        }
        play(x, y, move, pool);
        who_win(pool);
        plan(pool);
        move++;
        uses++;
        
        if (uses == 9 || line > 0){
            break;
        }
    }
    
    if (a == 'X'){
        printf("player1 is winner!\n");
    } else if (a == 'O'){
        printf("player2 is winner!\n");
    } else {
        printf("Its draw\n");
    }
    
    return 0;
}
