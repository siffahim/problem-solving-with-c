#include <stdio.h>
#include <stdlib.h>

int main(){
    char num[101];
    scanf("%s", num);
    int odd = 0, even = 0;



    for (int i = 0; num[i] != '\0'; i++) {
        int digit = num[i] - '0';

        if ((i + 1) % 2 == 1) { 
            odd += digit;
        } else {
            even += digit;
        }
    }

    int abs_diff = abs(odd - even);

    if(abs_diff%11 == 0){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0; 
}