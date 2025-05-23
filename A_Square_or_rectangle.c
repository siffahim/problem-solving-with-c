#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++){
        int width, height;
        scanf("%d %d", &width, &height);
        
        if(width == height){
            printf("Square");
        }
        else{
            printf("Rectangle");
        }
        printf("\n");
    }
    return 0;
}