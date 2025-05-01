#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int copy_arr_of_arr[n];
    for (int i = 0; i < n; i++){
        copy_arr_of_arr[i] = arr[i];
    }

    int i = 0;
    int j = n - 1;

    while (i<j)
    {
        int temp = copy_arr_of_arr[i];
        copy_arr_of_arr[i] = copy_arr_of_arr[j];
        copy_arr_of_arr[j] = temp;

        i++;
        j--;
    }

    int is_palindrome = 1;
    for (int i = 0; i < n; i++){
        if(arr[i] != copy_arr_of_arr[i]){
            is_palindrome = 0;
            break;
        }
    }

    if(is_palindrome){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0;
}