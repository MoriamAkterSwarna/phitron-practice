#include<stdio.h>

int main()
{
    char s[100001];
    scanf("%s", s); 
    for(int i=0; s[i] != '\0'; i++){
        if('A' <= s[i] && s[i] <= 'Z' ){
            s[i]= s[i] + 32; 
        }
         else if('a' <= s[i] && s[i] <= 'z' ){
            s[i]= s[i] -32; 
        } 
        
        if(s[i] == ','){
            s[i] = ' ';
        }
    }
    for(int i = 0; s[i]!='\0'; i++){
        printf("%c", s[i]); 
    }
    return 0;
}