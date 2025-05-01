#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while(t--){
        char s[101];
        scanf("%s", &s);

        // getting length from the string;
        int len = 0;
        for (int i = 0; s[i] != '\0'; i++){
            len++;
        }

        if(len <=10){
            printf("%s\n", s);
        }
        else{
            int between_len = len - 2;
            char first_char = s[0];
            char last_char = s[len - 1];

            printf("%c%d%c\n", first_char, between_len, last_char);
        }
        
    }

    return 0;
}