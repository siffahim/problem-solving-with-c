#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    while(n--){
        char s[51], t[51];
        scanf("%s %s", s, t);

        int len_s = strlen(s);
        int len_t = strlen(t);
        //int max_len = len_s > len_t ? len_s : len_t;
        int max_len;
        if(len_s > len_t){
            max_len = len_s;
        }else{
            max_len = len_t;
        }

        for (int i = 0; i<max_len; i++){
            if(i < len_s && i <len_t){
                printf("%c%c", s[i], t[i]);
            }
            else if(len_s > len_t){
                printf("%c", s[i]);
            }
            else if(len_s < len_t){
                printf("%c", t[i]);
            }

            //another conditions
            //  if (i < len_s) {
            //     printf("%c", s[i]);  // Print character from s if available
            // }
            // if (i < len_t) {
            //     printf("%c", t[i]);  // Print character from t if available
            // }
        }
        printf("\n");
    }

    return 0;
}