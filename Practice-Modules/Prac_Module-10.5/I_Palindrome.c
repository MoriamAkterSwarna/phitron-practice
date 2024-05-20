#include<stdio.h>
#include<string.h>
int main()
{
    char s[1001]; 
    scanf("%s", s);
  
  int len = strlen(s);
    char newS[1001];
    for(int i=strlen(s); i>=0; i--)
    {
        newS[i]= s[strlen(s)-i-1];
    }
    newS[len]='\0';
    if(strcmp(s, newS)==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}