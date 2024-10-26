#include<stdio.h>

int main()
{
    int n;
    scanf("%d\n", &n);
    char A[n+1];
     int sum = 0;
    
    // fgets(A, n+1, stdin);

    for(int i = 0; i < n; i++)
    {
        scanf("%c", &A[i]);
    }
    
    for(int i = 0;  i < n; i++)
    {
        if( A[i] >= '0' && A[i] <= '9'){
        int val = A[i] - '0';
        sum = sum + val;
        }
        
    } 
   
    printf("%d", sum);
    return 0;
}



