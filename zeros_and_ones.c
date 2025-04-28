#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int total_numbers_of_zeros = 0;
    int total_numbers_of_ones = 0;

    for (int i = 0; i < n; i++){
        if(arr[i] == 0){
            total_numbers_of_zeros++;
        }
        else if(arr[i] == 1){
            total_numbers_of_ones++;
        }
    }

    printf("%d %d", total_numbers_of_zeros, total_numbers_of_ones);

    return 0;
}