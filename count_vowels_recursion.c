#include <stdio.h>
#include <string.h>

void vowel_count(char s[], int len, int i, int* vowel_letter){
    if(i == len){
        return;
    }

    //convert upper to lower or vise versa
    if(s[i] >= 'A' && s[i] <= 'Z'){
        s[i] = s[i] + 32;
    }

    if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
        *vowel_letter = *vowel_letter + 1;
    }

    vowel_count(s, len, i + 1, vowel_letter);
}

int main(){
    char s[201];
    fgets(s, 201, stdin);
    int len = strlen(s);
    int vowel_letter = 0;

    vowel_count(s, len, 0, &vowel_letter);

    printf("%d", vowel_letter);
    return 0;
}