#include <stdio.h>

int main(){
    int m, a, b, c;
    scanf("%d %d %d %d", &m, &a, &b, &c);

    int multiplicationsOfThree = a * b * c;

    int result = m / multiplicationsOfThree;

    printf("%d", result);

    return 0;
}