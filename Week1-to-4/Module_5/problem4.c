#include<stdio.h>

int main()
{
    int N,digit; 
    scanf("%d", &N);
    digit= N/1000;
    if(digit % 2 == 0){
        printf("EVEN\n");
    }
    else{
        printf("ODD\n");
    }
    return 0;
}