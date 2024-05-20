#include<stdio.h>

int main()
{
    char C,next; 
    scanf("%c", &C); 
    
        if( C >= 97 && C<=122){
            next= C + 1; 
           
            if(C == 122){
                next = 97; 
                
            }
        }
        printf("%c", next);
    
    return 0;
}