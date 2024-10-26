#include<stdio.h>

int main()
{
    int T; 
    scanf("%d", &T);
    while (T--)
    {
       int K; 
         scanf("%d", &K);
         for(int i =1; i<=K; i++){
                printf("%d ", i);
         }
                printf("\n");
                
    }
    
    return 0;
}