#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    long long int arr[n];
    for (int i = 0; i < n; i++){
        scanf("%lld", &arr[i]);
    }

    long long int x;
    scanf("%lld", &x);

    int index = -1;

    for (int i = 0; i < n; i++){
        if(arr[i] == x){
            index = i;
            break;
        }
    }

    printf("%d", index);

    return 0;
}