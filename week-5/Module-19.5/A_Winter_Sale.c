#include<stdio.h>

int main()
{
    int X, P; 
    scanf("%d %d", &X, &P);
    float discount = (float)X  / 100;
    float original_price = (float) P / (1 - discount);
    printf("%.2f", original_price);

    return 0;
}