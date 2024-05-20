#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int N, reverse1, num; 
    scanf("%d", &N); 
    reverse1 = N % 10 ; 
    printf("%d", reverse1);
    num = N / 10;
    // printf("%d", num);
    num = num % 10;
    printf("%d", num);
    num = N / 100;
    // printf("%d", num);
    num = N % 100;
    printf("%d", num);
    num = N / 1000;
    // printf("%d", num);
    return 0;
}
