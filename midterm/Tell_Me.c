#include<stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
       int N; 
       scanf("%d", &N);
       int A[N];
         for(int i=0; i<N; i++){
              scanf("%d", &A[i]);
         }

         int X;
            scanf("%d", &X);
            int count = 0;
            for(int i=0; i<N; i++){
                if(A[i] == X){
                    printf("YES\n");
                    count=1;
                    break;
                }
    }
    if(count == 0){
        printf("NO\n");
    }
    }
    return 0;
}