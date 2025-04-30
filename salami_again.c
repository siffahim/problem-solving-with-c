#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 1; i <= n; i++){
        scanf("%d", &arr[i]);
    }

    int highestSalami = INT_MIN;

    for (int i = 1; i <= n; i++){
        if(arr[i] > highestSalami){
            highestSalami = arr[i];
        }
    }

    for (int i = 1; i <= n; i++){
        arr[i] = highestSalami - arr[i];

        printf("%d ", arr[i]);
    }

    return 0;
}