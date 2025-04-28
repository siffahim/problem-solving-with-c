#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 1; i <= n; i++){
        scanf("%d", &arr[i]);
    }

    int idx;
    scanf("%d", &idx);

    if(arr[idx] == 0){
        arr[idx] = 1;
    }
    else if(arr[idx] == 1){
        arr[idx] = 0;
    }

    for (int i = 1; i <= n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}