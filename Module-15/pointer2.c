#include<stdio.h>

int main()
{
    double x = 5.26; 
    double *ptr = &x;
    double *ptr2 = ptr;
    *ptr = 10.52;

    printf("x er value - %0.2lf\n", x);
    printf("x er address - %p\n", &x);
    printf("ptr er value - %p\n", ptr);
    printf("ptr er address - %p\n", &ptr);
    printf("ptr er memory size - %d\n", sizeof(ptr));
    return 0;
}