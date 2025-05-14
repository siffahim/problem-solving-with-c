#include <stdio.h>

long long int factorial(int n){
    if(n == 1){
        return 1;
    }

    long long int mul =  factorial(n - 1);
    return n * mul;
}

int main() {
    int n;
    scanf("%d", &n);

    long long int res = factorial(n);
    printf("%lld", res);

    return 0;
}