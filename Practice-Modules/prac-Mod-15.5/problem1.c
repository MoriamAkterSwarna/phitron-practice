#include<stdio.h>
#include<stdlib.h>

int my_abs(int N){
    N= abs(N);
    return N;
}
int main()
{
    int N; 
    scanf("%d", &N);
    printf("%d", my_abs(N));
    return 0;
}