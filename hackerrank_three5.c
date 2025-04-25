#include <stdio.h>
#include <string.h>

int main() {
    char s[10001];
    scanf("%s", &s);

    int freq[26] = {0};
    for (int i = 0; i < strlen(s); i++){
        int idx = s[i] - 97;
        freq[idx]++;
    }

    for (int i = 0; i < 26; i++){
        if(freq[i]>0){
            printf("%c - %d\n", i+97, freq[i]);
        }
    }

    return 0;
}