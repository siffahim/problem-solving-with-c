 #include <stdio.h> 

 int main() {
     int n;
     scanf("%d", &n);
     int star = 4;
     int space = n - 1;
     int face_down_star = n;
     int face_down_space = 1;

     for(int i = 1; i <= n; i++){
        // for (int k = 1; k <= space; k++){
        //     printf(" ");
        // }
        for (int j = 1; j <= star; j++)
        {
            printf("*");
        }
         printf("\n");
         star -= 2;
         space--;
     }
 
    
 }