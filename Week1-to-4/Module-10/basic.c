#include<stdio.h>

int main()
{
    int a[5];

    printf("%d", sizeof(a)); // 20 (5*4) 
    int size= sizeof(a)/sizeof(a[0]);
    printf("\n%d", size); // 5
    return 0;
}