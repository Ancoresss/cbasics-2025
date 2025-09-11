#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
char string[100];

printf("Enter the string:");
fgets(string, sizeof(string), stdin);

    for (int i=0; i<strlen(string); i+=2){
    string[i]=toupper(string[i]);
}
    printf("%s", string);
    return 0;
}
