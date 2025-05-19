#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++){
        long long int m, a, b, c;
        scanf("%lld %lld %lld %lld", &m, &a, &b, &c);

        long long int multiplicationsOfThree = a * b * c;

        if(m%multiplicationsOfThree == 0){
            long long int result = m / multiplicationsOfThree;
            printf("%lld", result);
        }
        else{
            printf("-1");
        }
        printf("\n");
    }

    return 0;
}