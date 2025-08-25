#include <stdio.h>
 
  int main () { 
  
    char str[1000];
    int count[26] = {0};

    printf("Enter string: ");
    scanf("%[^\n]", str);

    for (int i = 0; str[i] != '\0'; i++) {
        char c = str[i];
        if (c >= 'a' && c <= 'z') count[c - 'a']++;
        else if (c >= 'A' && c <= 'Z') count[c - 'A']++;
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] > 0) {
            printf("%c -> %d\n", 'a' + i, count[i]);
        }
    }

    return 0;
}

 	    
  
  
  
  
