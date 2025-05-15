#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    for (int k = 1; k <= t; k++){
        int n;
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; i++){
            scanf("%d", &a[i]);
        }

        //copy from a array
        int b[n];
        for (int i = 0; i < n; i++){
            b[i] = a[i];
        }

        //sort by ascending order
        for (int i = 0; i < n-1; i++){
            for (int j = i + 1; j < n; j++){
                if(b[i] > b[j]){
                    int temp = b[i];
                    b[i] = b[j];
                    b[j] = temp;
                }
            }
        }

        //making c array
        int c[n];
        for (int i = 0; i < n; i++){
            c[i] = a[i] - b[i];
        }

        for (int i = 0; i < n; i++)
        {
            if(c[i] < 0){
                printf("%d ", -c[i]);
            }
            else{
                printf("%d ", c[i]);
            }
        }
        printf("\n");
    }

    return 0;
}