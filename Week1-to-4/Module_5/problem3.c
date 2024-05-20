#include<stdio.h>

int main()
{
    
    char a, converted ; 
    scanf("%c", &a);

    // if(a>='A' && a<='Z'){
    if(a>=65 && a<=90){
        converted= a + 32;
        printf("%c", converted);
    }
    // else if(a>='a' && a<= 'z'){
    else if(a>=97 && a<=122){
        converted = a - 32;
        printf("%c", converted);
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}