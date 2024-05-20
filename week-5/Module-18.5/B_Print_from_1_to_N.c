#include<stdio.h>



int printN(int n)
{
    if (n == 0)
    {
        return 0;
    }
    printN(n - 1);
    printf("%d\n", n);
    return 0;
}
int main()
{
    int n;
    scanf("%d", &n);
    printN(n);
    return 0;
}