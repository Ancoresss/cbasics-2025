#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

#define MAX_WORDS 1024
#define MAX_WORD_LEN 64
#define MAX_BAD 6
#define DICT_FILE "words.txt"

static const char *builtin_dict[] = {
    "computer","program","hangman","challenge","keyboard",
    "algorithm","function","variable","pointer","memory",
    "compiler","optimization","network","socket","thread",
    "process","binary","debugger","runtime","integer"
};
static const size_t builtin_len = sizeof(builtin_dict)/sizeof(*builtin_dict);

static const char *hangman_stages[MAX_BAD+1] = {
    " +---+\n     |\n     |\n     |\n    ===\n",
    " +---+\n O   |\n     |\n     |\n    ===\n",
    " +---+\n O   |\n |   |\n     |\n    ===\n",
    " +---+\n O   |\n/|   |\n     |\n    ===\n",
    " +---+\n O   |\n/|\\  |\n     |\n    ===\n",
    " +---+\n O   |\n/|\\  |\n/    |\n    ===\n",
    " +---+\n O   |\n/|\\  |\n/ \\  |\n    ===\n"
};

static void to_lower_inplace(char *s){
    for(; *s; ++s) *s = (char)tolower((unsigned char)*s);
}

static size_t load_dict(char dict[][MAX_WORD_LEN], size_t max_words){
    FILE *f = fopen(DICT_FILE, "r");
    size_t n = 0;
    if(!f){

        for(size_t i=0;i<builtin_len && n<max_words;i++){
            strncpy(dict[n++], builtin_dict[i], MAX_WORD_LEN-1);
            dict[n-1][MAX_WORD_LEN-1]=0;
        }
        return n;
    }
    char buf[MAX_WORD_LEN];
    while(n < max_words && fgets(buf, sizeof buf, f)){

        char *nl = strchr(buf, '\n');
        if(nl) *nl = 0;
        if(buf[0]==0) continue;
        
        size_t j=0;
        for(size_t i=0; buf[i] && j+1<MAX_WORD_LEN; ++i){
            if(isalpha((unsigned char)buf[i])) buf[j++] = (char)buf[i];
        }
        buf[j]=0;
        if(j==0) continue;
        to_lower_inplace(buf);
        strncpy(dict[n++], buf, MAX_WORD_LEN-1);
        dict[n-1][MAX_WORD_LEN-1]=0;
    }
    fclose(f);
    if(n==0){
        for(size_t i=0;i<builtin_len && n<max_words;i++){
            strncpy(dict[n++], builtin_dict[i], MAX_WORD_LEN-1);
            dict[n-1][MAX_WORD_LEN-1]=0;
        }
    }
    return n;
}

static size_t pick_random(size_t n){
    if(n==0) return 0;
    return (size_t)((uint32_t)rand() % (uint32_t)n);
}

static int reveal_letter(const char *word, uint32_t *guessed, char letter){
    if(letter < 'a' || letter > 'z') return 0;
    uint32_t bit = 1u << (letter - 'a');
    if((*guessed) & bit) return 0; 
    int revealed = 0;
    for(const char *p = word; *p; ++p){
        if(*p == letter) revealed++;
    }
    if(revealed) *guessed |= bit;
    else {

        *guessed |= bit;
    }
    return revealed;
}

static int all_revealed(const char *word, uint32_t guessed){
    for(const char *p = word; *p; ++p){
        char c = *p;
        if(c<'a' || c>'z') continue;
        if(!(guessed & (1u << (c - 'a')))) return 0;
    }
    return 1;
}

static void print_puzzle(const char *word, uint32_t guessed){
    for(const char *p = word; *p; ++p){
        char c = *p;
        if(c>='a' && c<='z'){
            putchar( (guessed & (1u << (c - 'a'))) ? c : '_' );
        } else {
            putchar(c);
        }
        putchar(' ');
    }
    putchar('\n');
}

static void print_used(uint32_t guessed){
    printf("Used: ");
    for(char c='a'; c<='z'; ++c){
        if(guessed & (1u << (c-'a'))) putchar(c);
        else putchar('.');
    }
    putchar('\n');
}

int main(void){
    srand((unsigned)time(NULL));
    char dict[MAX_WORDS][MAX_WORD_LEN];
    size_t dict_n = load_dict(dict, MAX_WORDS);

    char input[128];
    printf("=== Hangman (C) ===\n");
    printf("SLOVNIK: %zu SLIV.DOBAV SLOVA CHERES words.txt V TY SAMU PAPKU.\n", dict_n);

    while(1){

        size_t idx = pick_random(dict_n);
        char word[MAX_WORD_LEN];
        strncpy(word, dict[idx], MAX_WORD_LEN-1);
        word[MAX_WORD_LEN-1]=0;
        to_lower_inplace(word);

        uint32_t guessed = 0;
        int bad = 0;
        int won = 0;

        while(1){
            puts("--------------------------------------------------");
            printf("%s\n", hangman_stages[ (bad>MAX_BAD?MAX_BAD:bad) ]);
            print_puzzle(word, guessed);
            print_used(guessed);
            printf("OSHIBOK: %d / %d\n", bad, MAX_BAD);
            printf("VEDI BYKVI LIBO CELE CHISLO: ");
            if(!fgets(input, sizeof input, stdin)){
		    puts("VVID ZAVERSHENO");
		    return 0; }

            char *nl = strchr(input, '\n'); if(nl) *nl = 0;
            if(input[0]==0) { puts("ALO BYKVI VEDI."); continue; 
	    }
            if(strlen(input) > 1){
                to_lower_inplace(input);
                if(strcmp(input, word) == 0){
                    won = 1; break;
                } else {
                    bad++;
                    printf("NE UGADAL SLOVO. +1 oshibka.\n");
                }
            } else {
                char ch = (char)tolower((unsigned char)input[0]);
                if(ch < 'a' || ch > 'z'){
                    puts("ESLI IQ BILSHE 12 TO VVODI TOLKO LATINICU, OK?.");
                    continue;
                }
                uint32_t bit = 1u << (ch - 'a');
                if(guessed & bit){
                    puts("TAKA BYKVA BILA.");
                    continue;
                }
                int found = 0;
                for(const char *p=word; *p; ++p) if(*p==ch) { found=1; break; }
                guessed |= bit;
                if(found){
                    printf("LITERA '%c' naidena.\n", ch);
                    if(all_revealed(word, guessed)){ won = 1; break; }
                } else {
                    bad++;
                    printf("LITERA '%c' net v slove.+1 oshibka. \n", ch);
                }
            }
            if(bad > MAX_BAD) break;
        }

        puts("--------------------------------------------------");
        if(won){
            printf("BRAVO SENIOR! ZAGADANE SLOVO: %s\n", word);
        } else {
            printf("%s\n", hangman_stages[MAX_BAD]);
	    printf("AHHAHA LOX, bulo slovo: %s/n", word);
        }

        printf("DADEP?(y/n): ");
        if(!fgets(input, sizeof input, stdin)) break;
        if(tolower((unsigned char)input[0]) != 'y') break;
    }
    puts("THX FOR gamE");
    return 0;
}

