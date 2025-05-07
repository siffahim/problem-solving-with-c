#include <stdio.h>
#include <limits.h>

int max_value(int arr[],int n){
    int mx_value = arr[0];
    for (int i = 0; i < n; i++){
        if(arr[i] > mx_value){
            mx_value = arr[i];
        }
    }
    return mx_value;
}

int min_value(int arr[],int n){
    int mn_value = arr[0];
    for (int i = 0; i < n; i++){
        if(arr[i] < mn_value){
            mn_value = arr[i];
        }
    }
    return mn_value;
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int max_value_result = max_value(arr, n);
    int min_value_result = min_value(arr, n);

    printf("%d %d",min_value_result, max_value_result);
    return 0;
}