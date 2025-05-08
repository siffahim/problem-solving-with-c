#include <stdio.h>
#include <string.h>

int is_palindrome(char s[]){
    int len =0;
    for (int i = 0; s[i] != '\0'; i++){
        len++;
    }
    

    char copy_str[1001];
    for (int i = 0; i <= len; i++){
        copy_str[i] = s[i];
    }

    int i = 0;
    int j = len - 1;
    while(i<j){
        char temp = copy_str[i];
        copy_str[i] = copy_str[j];
        copy_str[j] = temp;

        i++;
        j--;
    }

    int is_palindrome_str = 1;
    for (int i = 0; i < len; i++){
        if(s[i] != copy_str[i]){
            is_palindrome_str = 0;
            break;
        }
    }
    return is_palindrome_str;
}

int main(){
    char s[1001];
    scanf("%s", s);

    is_palindrome(s);

    int is_palindrome_str = is_palindrome(s);

    if(is_palindrome_str){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }

    return 0;
}