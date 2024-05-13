#include<stdio.h>

int main()
{
    int a, b; 
    scanf("%d %d", &a, &b); 
    int res = a-b; 
    if(res >= 0){
        printf("%d", res); 
    }
    else{
        printf("%d", 0);
    }

    return 0;
}