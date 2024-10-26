#include<stdio.h>
#include<string.h>
int main()
{
    char a[100], b[100];
    scanf("%s %s", a, b);
    int v = strcmp(a, b);
    if(v < 0){
        printf("a is smaller than b\n");
    }else if(v > 0){
        printf("b is smaller than a\n");
    }else{
        printf("same\n");
    }
    // printf("%d\n", v);
    return 0;
}