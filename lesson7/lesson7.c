#include <stdio.h>
#include <string.h>

int main () {

   char text[100];
   int length;
   
   printf("Enter text: ");
    gets(text);

    length = strlen(text);

    printf("reverse: ");
    for( int i = length - 1; i >= 0; i-- ) {
        printf("%c", text[i]);
    }
    printf("\n");

    return 0;
}