#include <stdio.h>

int main() {
    int n;
    char digit[1000001];
    scanf("%d %s", &n, digit);


    int sum = 0;
    for (int i = 0; i < n; i++){
        sum += digit[i] - 48;
    }

    printf("%d", sum);

    return 0;
}