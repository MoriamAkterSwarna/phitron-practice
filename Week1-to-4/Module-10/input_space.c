#include<stdio.h>
#include<string.h>

int main()
{
    char a[25];
    // gets(a);
    fgets(a, 19, stdin);  //it takes enter as input and stores it in the array
    // a[17]='\0';
    printf("%s", a);
    return 0;
}