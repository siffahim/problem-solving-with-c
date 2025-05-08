#include <stdio.h>

int count_before_one(int arr[],int n){
    int len_before_one = 0;
    for (int i = 0; i < n; i++){
        if(arr[i] == 1){
            break;
        }
        len_before_one++;
    }
    return len_before_one;
}

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int result = count_before_one(arr, n);
    printf("%d", result);

    return 0;
}