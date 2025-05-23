#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int a, b, x;
        scanf("%d %d %d", &a, &b, &x);

        int dollar_need_to_rich = b - a;

        int have_year = dollar_need_to_rich / x;

        printf("%d", have_year);
        printf("\n");
    }

    return 0;
}