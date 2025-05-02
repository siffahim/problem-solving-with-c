#include <stdio.h>

int main(){
    char a[11],b[11];
    scanf("%s %s", &a, &b);
    int len_a = 0;
    int len_b = 0;

    //length
    for (int i = 0; a[i] != '\0'; i++){
        len_a++;
    }

    for (int i = 0; b[i] != '\0'; i++){
        len_b++;
    }

    //concatenating
    char concat[22];
    for (int i = 0; i<len_a; i++){
        concat[i] = a[i];
    }

    for (int i = 0; i <= len_b; i++){
        concat[i + len_a] = b[i];
    }

    
    printf("%d %d\n", len_a, len_b);
    printf("%s\n", concat);


    //swapping
    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;

    printf("%s %s\n", a, b);

    return 0;
}