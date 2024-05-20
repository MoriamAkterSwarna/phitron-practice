#include<stdio.h>

int main()
{
    // char a[5] = {'a', 'b', 'c', 'd', 'e'};
    char a[6] = "abcde\0";
    // char a[6] = "abcde\0";
    // for(int i=0; i<5; i++)
    // {
    //     printf("%c\n", a[i]);
    // }

    int size= sizeof(a)/sizeof(char);
    printf("%d\n", size); // 6
    printf("%s\n", a); // 6

    // printf("%s",a);
    return 0;
}