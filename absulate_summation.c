#include <stdio.h>
//#include <stdlib.h>

int main(){

    int n;
    scanf("%d", &n);
    long long int arr[n];

    for (int i = 0; i < n;i++){
        scanf("%lld", &arr[i]);
    }

    long long int sum = 0;

    for (int i = 0; i < n; i++){
        sum += arr[i];
    }

    if(sum < 0){
        printf("%lld", -sum);
    }else{
        printf("%lld",sum);
    }

    
    //type one with abs functions
    // int n;
    // scanf("%d", &n);
    // long long int arr[n];

    // for (int i = 0; i < n;i++){
    //     scanf("%lld", &arr[i]);
    // }

    // long long int sum = 0;

    // for (int i = 0; i < n; i++){
    //     sum += arr[i];
    // }

    // printf("%lld", llabs(sum));

    return 0;
}