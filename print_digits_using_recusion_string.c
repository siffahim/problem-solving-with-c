#include <stdio.h>
#include <string.h>

void print_digits(char s[] ,int i){
    int len = strlen(s);
    if(i == len){
        return;
    }

    printf("%c ", s[i]);
    print_digits(s, i + 1);
}

int main(){
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char s[100001];
        scanf("%s", &s);

        print_digits(s, 0);
        printf("\n");
    }

    return 0;
}