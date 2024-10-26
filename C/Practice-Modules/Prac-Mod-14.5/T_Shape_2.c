#include<stdio.h>

int main()
{
    int N; 
    scanf("%d", &N); 

    int k=1, s=N-1; 
    for(int i= 1; i<=N; i++){
        for(int j=1; j<=s; j++){
            printf(" ");
        }
        for(int j=1; j<=k; j++){
            printf("*");
        }
    
        s--;
        k+=2; 
        printf("\n");
    }
    return 0;
}