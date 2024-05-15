#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    long long int A[n];
    long long int sum = 0;
    for(int i = 0; i < n; i++)
    {
        scanf("%lld", &A[i]);
    }
    for(int i = 0; i < n; i++)
    {
        sum = sum + A[i];
    }
   
    printf("%lld", sum);
    return 0;
}