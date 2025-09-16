#include <stdio.h>
#include <string.h>

int main() {
    char text[100];
    const char* bad_words[] = {"bad", "ugly", "nasty", "evil", "dumb"};
    const int num_bad_words = 5;
    printf("Enter a text: ");
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = 0;
    for (int i = 0; i < num_bad_words; i++) {
        char* pos = text;
        while ((pos = strstr(pos, bad_words[i])) != NULL) {
            memset(pos, '*', strlen(bad_words[i]));
            pos += strlen(bad_words[i]);
        }
        
    }
    printf("Censored text: %s\n", text);
    return 0;
}