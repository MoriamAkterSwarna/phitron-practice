#include<stdio.h>

int printN(int n)
{
    if(n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        printf("%d", n);
    }
    else
    {
        printf("%d ", n);
    }
    printN(n-1);
    return 0;
}

int main()
{
    int n;
    scanf("%d", &n);
    printN(n);
    return 0;
}