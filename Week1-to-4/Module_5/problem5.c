#include<stdio.h>

int main()
{
    char X; 
    scanf("%c", &X);
    if(X >= 48 && X <= 57){
       printf("IS DIGIT\n");
    }
    else{
         printf("ALPHA\n");
        if(X >= 65 && X <= 90){
           
            printf("IS CAPITAL\n");
        }
        else{
            if(X >= 97 && X <= 122){
                
                printf("IS SMALL\n");
            }
            else{
                printf("IS SPECIAL CHARACTER\n");
            }
        }
    }
    return 0;
}