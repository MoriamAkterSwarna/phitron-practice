#include<stdio.h>
#include<limits.h>
int main()
{
    int N; 
    scanf("%d", &N);
    int A[N];
    for(int i=0; i<N; i++)
    {
        scanf("%d", &A[i]);
    }

    int min = INT_MAX,pos;
    for(int i = 0; i<N; i++)
    {
       if(A[i] < min)
       {
           min = A[i];
           pos = i+1;
       } 

    }
    printf("%d %d", min, pos);
    return 0;
}