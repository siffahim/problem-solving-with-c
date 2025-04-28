#include <stdio.h>

int main(){
    char word;
    scanf("%c", &word);

    if(word == 'a' || word == 'e' || word == 'i' || word == 'o' || word == 'u'){
        printf("Vowel");
    }else{
        printf("Consonant");
    }
    return 0;
}