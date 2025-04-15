#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);

    int last_digit = n % 1000;
    printf("%d", last_digit);

    return 0;
}