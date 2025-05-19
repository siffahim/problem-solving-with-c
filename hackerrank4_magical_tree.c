#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int crownHeight = (n + 11) / 2;
    int fixedTrunkSize = 5;
    int trunkSpace =  (crownHeight - (n / 2) - 1);

    //Christmas tree crown
    for(int i = 0; i < crownHeight; i++){
        for(int j = 0; j < crownHeight - i-1; j++){
            printf(" ");
        }
        for(int j = 0; j < 2 * i + 1; j++){
            printf("*");
        }
        printf("\n");
 
    }

    //Christmas tree trunk
    for(int i = 0; i < fixedTrunkSize; i++){
        for(int j = 0; j < trunkSpace; j++){
            printf(" ");
        }
        for(int j = 0; j < n; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}