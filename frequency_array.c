#include <stdio.h>
#include <string.h>

int main(){
    int n, m;
    scanf("%d %d", &n, &m);

    int arr[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int freq[5] = {0};

    for (int i = 0; i < 5; i++){
        freq[i]++;
    }

    return 0;
}