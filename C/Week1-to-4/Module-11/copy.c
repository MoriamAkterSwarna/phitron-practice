#include<stdio.h>
#include<string.h>
int main()
{
    char a[100], b[100];
    scanf("%s %s", a, b);
    // printf("a = %s\nb = %s\n", a, b);

    // for(int i=0; i<strlen(b); i++){
    //     a[i] = b[i];
    // }
    strcpy(a, b);
    printf("%s %s", a, b);
    return 0;
}