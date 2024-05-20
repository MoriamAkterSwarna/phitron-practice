#include<stdio.h>

int main()
{
    int N; 
    scanf("%d", &N); 
    int A[N]; 
    for(int i =0; i<N; i++){
        scanf("%d ", &A[i]); 
    }

    int num,ans=-1; 
    scanf("%d", &num); 
    for(int i=0; i<N; i++){
        if(A[i] == num){
           
            ans = i; 
            break; 
        }else{
            ans = -1;

        }
    }
    
        printf("%d", ans);
    return 0;
}