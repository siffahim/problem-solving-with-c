#include <stdio.h>
#include <limits.h>
int main(){
    int n;
    int x;
    int max_num = INT_MIN;

    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        scanf("%d", &x);

        if(x > max_num){
            max_num = x;
        }
    }
    printf("%d", max_num);
    return 0;
}