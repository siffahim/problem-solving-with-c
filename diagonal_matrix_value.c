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

    //square hote hobe
    // all value will be zeros expect primary values

    int is_diagonal = 1;

    //print primary diagonal value
    if(r == c){ //checking square
        for (int i = 0; i < r; i++){
            for (int j = 0; j < c; j++){
                if(i == j){  //i+j == r-1 -> secondary matrix condition
                    //we are at primaries value
                }
                else{
                    if(arr[i][j] != 0){
                        //we are outside of primaries value
                        is_diagonal = 0;
                        printf("This is not a primary diagonal matrix");
                    }
                }
            }
        }

        if(is_diagonal){
            printf("This is a primary diagonal matrix");
        }
    }
    else{
        printf("This is not a primary diagonal matrix");
    }
    return 0;
}