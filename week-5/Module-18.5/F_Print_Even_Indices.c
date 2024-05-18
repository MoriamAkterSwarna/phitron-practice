#include<stdio.h>


void evenIndices(int n, int arr[])
{
    if( n < 0)
    {
        return;
    }
    
        if( n>=0 && n%2==0)
        {
            printf("%d",arr[n]);
        }
        else{
            printf(" "); 
        }
        evenIndices(n-1,arr);
    
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
     evenIndices(n-1,arr); 

    return 0;
}