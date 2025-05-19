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

    int is_jadu_matrix = 1;
    if(r == c){
        for (int i = 0; i < r; i++){
            for (int j = 0; j < c; j++){
                if(i == j || i+j == r-1){
                    if(arr[i][j] != 1){
                        is_jadu_matrix = 0;
                    };
                }else{
                    if(arr[i][j] != 0){
                        is_jadu_matrix = 0;
                    }
                }
            }
        }

        if(is_jadu_matrix){
            printf("YES");
        }
        else{
            printf("NO");
        }
    }
    else{
        printf("NO");
    }

    
    return 0;
}