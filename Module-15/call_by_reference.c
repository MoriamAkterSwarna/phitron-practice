#include<stdio.h>

void fun(int* p)
{
    // printf("p er address - %p\n", p);
    printf("p er value - %p\n", p);
    *p = 200;
    printf("p er value - %d\n", *p);
}

int main()
{
    int x = 100;
    fun(&x);
    printf("x er address - %p\n", &x);
    printf("x er value inside main - %d\n", x);
    return 0;
}