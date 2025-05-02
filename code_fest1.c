#include <stdio.h>
#include <string.h>

int main(){
    char word1[101], word2[101];
    scanf("%s %s", word1, word2);
    int len_word1 = strlen(word1);
    int len_word2 = strlen(word2);

    char freq1[26] = {0};
    char freq2[26] = {0};

    for (int i = 0; i < len_word1; i++){
        int idx = word1[i] - 97;
        freq1[idx]++;
    }

    for (int i = 0; i < len_word2; i++){
        int idx = word2[i] - 97;
        freq2[idx]++;
    }

    int is_same = 1;
    for (int i = 0; i < 26; i++){
        if(freq1[i] != freq2[i]){
            is_same = 0;
            break;
        }
    }

    if(is_same){
        printf("Yes");
    } 
    else{
        printf("No");
    }

        // char s[78];
        // scanf("%s", s);

        // int len = strlen(s);

        // int freq[26] = {0};
        // for (int i = 0; i < len; i++){
        //     int idx = s[i] - 97;
        //     freq[idx]++;
        // }

        // int twice_value_idx;

        // for (int i = 0; i < 26; i++){
        //     if(freq[i] != 3){
        //         twice_value_idx = i;
        //     }
        // }

        // printf("%c", twice_value_idx + 97);

        // type two pb3
        //  int n;
        //  scanf("%d", &n);

        // char digit[n + 1];
        // scanf("%s", digit);

        // int sum = 0;

        // for (int i = 0; i < n; i++){
        //     sum = sum + digit[i] - '0';
        // }

        // if(sum%3 == 0){
        //     printf("YES");
        // }
        // else{
        //     printf("NO");
        // }

        // type one pb3
        //  int n;
        //  scanf("%d", &n);

        // int num;
        // scanf("%d", &num);

        // if(num%3 == 0){
        //     printf("YES");
        // }
        // else{
        //     printf("NO");
        // }

        // pb_2
        //  char s[101];
        //  scanf("%s", s);

        // int len = 0;
        // for (int i = 0; s[i] != 0; i++){
        //     len++;
        // }

        // char copy_of_s[101];
        // for (int i = 0; i < len; i++){
        //     copy_of_s[i] = s[i];
        // }

        // char temp = copy_of_s[0];
        // copy_of_s[0] = s[len - 1];
        // copy_of_s[len - 1] = temp;

        // int is_same = 1;
        // for (int i = 0; i < len; i++){
        //     if(copy_of_s[i] != s[i]){
        //         is_same = 0;
        //         break;
        //     }
        // }

        // if(is_same){
        //     printf("Yes\n");
        // }
        // else{
        //     printf("No\n");
        // }

        // Apple missing pb1
        //  int apple_had,apple_give, apple_bought;
        //  scanf("%d %d %d", &apple_had, &apple_give, &apple_bought);

        // int rest_of_apple_had = apple_had - apple_give;

        // printf("%d", rest_of_apple_had + apple_bought);

        return 0;
}