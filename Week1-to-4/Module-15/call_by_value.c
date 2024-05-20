#include<stdio.h>

void fun(int x)
{
    printf("x er address - %p\n", &x);
    printf("x er value - %d\n", x);
    x = 200;
    printf("x er value - %d\n", x);
}

int main()
{
    int x = 100;
     printf("x er address - %p\n", &x);
    printf("x er value - %d\n", x);
    fun(x); 
    printf("x er value - %d\n", x);
    return 0;
}