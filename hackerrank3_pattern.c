#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int hash = 1;
    int space = n - 1;
    
    
    for (int i = 1; i <= n; i++) {
        for (int k = 1; k <= space; k++) {
            printf(" ");
        }
    
        if (i % 2 == 1) {
            for (int j = 1; j <= hash; j++) {
                printf("#");
            }
        } else {
            for (int j = 1; j <= hash; j++) {
                printf("-");
            }
        }
        printf("\n");
        
    
        hash += 2;
        space--;
    }

    //ultra print
    hash -= 4;
    space = 1;  

    for (int i = n-1; i >= 1; i--) {
        for (int k = 1; k <= space; k++) {
            printf(" ");
        }
        if (i % 2 == 1) {
            for (int j = 1; j <= hash; j++) {
                printf("#");
            }
        } else {
            for (int j = 1; j <= hash; j++) {
                printf("-");
            }
        }
        printf("\n");

        hash -= 2;
        space++;
    }

    return 0;
}
