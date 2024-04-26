#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    int count2= 0;
    int count3= 0;
    for(int i=0; i<n; i++){
        if(A[i] %2 ==0){
            count2++;
        }else if(A[i] %3 == 0){
            count3++;
        }
    }
    printf("%d %d", count2, count3);
    return 0;
}