#include <stdio.h>
#include <limits.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 1; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int lowest_digit = INT_MAX;
    int lowest_digit_index;

    //operation
    for (int i = 1; i < n; i++){
        if(arr[i] < lowest_digit){
            lowest_digit = arr[i];
            lowest_digit_index = i;
        }
    }

    printf("%d %d", lowest_digit, lowest_digit_index);

    return 0;
}