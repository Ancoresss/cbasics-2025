#include <stdio.h>
#include <string.h>
 int main(){
    char word [100];
    int j =0;
    printf("Enter the word:");
    scanf("%s", word);
     
    int a=strlen(word)+1;
    char word2[a];
    int i = strlen(word)-1;
    for(; i>=0; i--){
        word2[j]=word[i];
        j++;
}
     word2[j] = '\0';
     
    if(strcmp(word, word2)==0){
        printf("The word is a palindrome\n");
}
    else{
        printf("The word isn't a palindrome\n");
}

    return 0;
     
}
