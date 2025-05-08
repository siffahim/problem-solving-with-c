#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int hash = 1;
    int space = n - 1;

    // Top half pattern
    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int k = 1; k <= space; k++) {
            printf(" ");
        }
        // Print hashes or dashes based on row
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
        hash += 2;  // Increase the number of symbols by 2
        space--;  // Decrease the spaces
    }

    
    return 0;
}
