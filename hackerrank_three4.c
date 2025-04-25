#include <stdio.h>
#include <string.h>

int main(){
    int t;
    scanf("%d", &t);

    int j = 0;
    while(j<t){
        char s[10001];
        scanf("%s", &s);

        int capital_cnt = 0;
        int smaller_cnt = 0;
        int digit_cnt = 0;

        int len = strlen(s);

        for (int i = 0; i < len; i++){
            
            if(s[i] >= 'A' && s[i] <= 'Z'){
                capital_cnt++;
            }
            else if(s[i] >= 'a' && s[i] <= 'z'){
                smaller_cnt++;
            }
            else if(s[i] >= '0' && s[i] <= '9'){
                digit_cnt++;
            }
        }

        printf("%d %d %d\n", capital_cnt, smaller_cnt, digit_cnt);
        j++;
    }

    return 0;
}