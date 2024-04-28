#include<stdio.h>
int main() {
    int n, s, k; 
    scanf("%d", &n); 
     s=0, k=(2 *n)-1; 
    for(int i= 1; i<=n; i++){
        for(int j=1; j<=s; j++){
            // printf("j= %d\n", j);
            //  printf("s= %d\n", s);
            printf(" ");
        }
        for(int j=k; j>0; j--){
            printf("*");
        }

        printf("\n");
        s++; 
        k-=2; 
    }
}