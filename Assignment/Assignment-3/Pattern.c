#include<stdio.h>

int main()
{
    int N,k,s; 
    scanf("%d", &N);

     k=1; s=N-1;
    for(int i =1; i<= (2 *N)-1; i++){

        for(int j=1; j<=s; j++){
            printf(" ");
        }

        if(i %2 ==0){
            for(int j=1; j<=k; j++){
            printf("-");
            }
        }
        else{
            for(int j=1; j<=k; j++){
            printf("#");
            }
        
        }

        if(i<N){
            k+=2;
            s--;
        }
        else{
            k-=2;
            s++;
        }
        printf("\n");
    }
    return 0;
}