#include<stdio.h>

int main()
{
    int N,k,s;
    scanf("%d", &N);
    k=1; s=N-1;
    for(int i=1; i<=N; i++){
        for( int j=1; j<=s; j++){
            printf(" ");
        }
        for(int j=k; j>=1; j--){
            printf("%d",j);
        }
        k++ ;
        s--;
        printf("\n");
    }
    return 0;
}