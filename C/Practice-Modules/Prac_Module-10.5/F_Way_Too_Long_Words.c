#include<stdio.h>
#include<string.h>
int main()
{
    int t; 
    scanf("%d", &t);
    for(int i = 0; i < t; i++)
    {
        char s[101]; 
        scanf("%s", s);
       
         int size = strlen(s);
        if(size > 10)
        {
            printf("%c%d%c\n", s[0], size-2, s[size-1]);
        }
        else
        {
            printf("%s\n", s);
        }
    }
    return 0;
}