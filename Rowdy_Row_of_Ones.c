#include <stdio.h>

int main(){
    int r, c;
    scanf("%d %d", &r, &c);
    int arr[r][c];
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            scanf("%d", &arr[i][j]);
        }
    }


    int freq_arr[r];
    for (int i = 0; i < r; i++){
        freq_arr[i] = 0;
    }

    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            if (arr[i][j] == 1)
            {
                freq_arr[i]++;
            }
        }
    }

    int mx_one_row_index = 0;
    int max_value = freq_arr[0];

    for (int i = 1; i < r; i++){
        if(freq_arr[i] > max_value){
            max_value = freq_arr[i];
            mx_one_row_index = i;
        }
    }

    printf("%d", mx_one_row_index);

    return 0; 
}