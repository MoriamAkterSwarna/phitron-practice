#include<stdio.h>

long long int summation(int n, int arr[])
{
    if( n < 0)
    {
        return 0;
    }
    long long int sum = arr[n] + summation(n-1,arr); 
    return sum;
    
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
   long long int sum = summation(n-1,arr); 
    printf("%lld",sum);

    return 0;
}