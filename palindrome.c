#include <stdio.h>

int main(){
    char s[1001];
    scanf("%s", &s);
    int len = 0;
    for (int i = 0; s[i] != '\0'; i++){
        len++;
    }

    char copy_string_of_s[1001];

    for (int i = 0; i<len; i++){
        copy_string_of_s[i] = s[i];
    }

    int i = 0;
    int j = len - 1;
    while(i<j){
        char temp = copy_string_of_s[i];
        copy_string_of_s[i] = copy_string_of_s[j];
        copy_string_of_s[j] = temp;

        i++;
        j--;
    }

    int is_palindrome = 1;
    for (int i = 0; i < len; i++){
        if(copy_string_of_s[i] != s[i]){
            is_palindrome = 0;
            break;
        }
    }

    if(is_palindrome){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0;
}