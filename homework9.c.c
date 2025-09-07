#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 1000

int main() {
    char text[MAX_LENGTH];
    char result[MAX_LENGTH];
    int i = 0, j = 0;
    int space_found = 0;

    
    printf("Enter text: ");
    fgets(text, MAX_LENGTH, stdin);
    
    
    if (text[strlen(text) - 1] == '\n') {
        text[strlen(text) - 1] = '\0';
    }
    
    
    while (text[i] == ' ') {
        i++;
    }
    
    
    while (text[i] != '\0') {
        if (text[i] == ' ') {
            if (!space_found && j > 0) {
                result[j] = ' ';
                j++;
                space_found = 1;
            }
        } else {
            result[j] = text[i];
            j++;
            space_found = 0;
        }
        i++;
    }
    
   
    if (j > 0 && result[j-1] == ' ') {
        j--;
    }
    
    
    result[j] = '\0';
    
    
    printf("Result: %s\n", result);
    
    return 0;
}