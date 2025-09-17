/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int person, comp;
    const char *name[] = {"Камінь", "Ножиці", "Бумага"};
    
    printf("\nВиберіть один з варіантів:\n");
    printf("0 - Камінь,\n1 - Ножиці,\n2 - Папір \n");
    printf("Ваш вибір(число): ");
        if (scanf("%d", &person) != 1) {
        printf("Помилка\n");
        return 1;
        }

    if (person < 0 || person > 2) {
        printf("Неправильний вибір\n");
        return 1;
        }
        comp = rand() % 3 ;
        printf("Ви: %s, Комп: %s \n", name[person], name[comp]);
        
        if (person == comp) {
            printf("Нічия");
        } 
        else if ((person == 0 && comp == 1)||(person == 1 && comp == 2)||(person == 2 && comp == 0)){
            printf("Ти вийграв");
        }
        else
            printf("Ти програв");
        printf("\nГру завершено.\n");
    return 0;
}
