#include<stdio.h>

int sum(int a, int b){
    scanf("%d %d", &a, &b);
    return a+b;
}

int main()
{
    int a, b;
    int res = sum(a, b);
    printf("%d",res);
    return 0;
}