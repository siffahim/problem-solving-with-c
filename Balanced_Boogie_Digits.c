#include <stdio.h>

int main(){
    int l, r;
    scanf("%d %d", &l, &r);
    int is_balance = 0;

    for (int i = l; i<=r;i++){
        int even = 0, odd = 0;
        int temp = i;
        while(temp > 0){
            int digit = temp % 10;
            if(digit%2 == 0){
                even++;
            }
            else{
                odd++;
            }
            temp = temp / 10;
        }
        if(even == odd){
            printf("%d\n", i);
            is_balance = 1;
        }
    }

    if(!is_balance){
        printf("-1\n");
    }

    return 0;
}