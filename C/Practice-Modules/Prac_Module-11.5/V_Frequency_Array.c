#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int M;
    scanf("%d", &M);
    int A[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }


    int count[M + 1];


for (int i = 0; i <= M; i++) {
    count[i] = 0;
}
    for (int i = 0; i < N; i++)
    {
        if (A[i] <= M)
        {   
            
            count[A[i]]++;
           
        }
    }
    for(int i = 1; i <= M; i++)
    {
        
            printf("%d\n",  count[i]);
        
    }
    return 0;
}