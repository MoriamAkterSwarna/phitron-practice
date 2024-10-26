#include<stdio.h>

int main()
{
    char X[21], Y[21];
    scanf("%s %s", X, Y);
    int i =0;
    while (1)
    {
       if(X[i] == '\0' && Y[i] == '\0')
       {
           printf("%s\n", X);
           break;
       }
       else if(X[i] == '\0' )
       {
             printf("%s\n", X);
           break;
       }
       else if(  Y[i] == '\0')
       {
             printf("%s\n", Y);
           break;
       }
       
       
        if(X[i] == Y[i])
       {
           i++;
       }
       else if(X[i] < Y[i])
       {
           printf("%s\n", X);
           break;
       }
       else{
              printf("%s\n", Y);
              break;
       }
    }
    
    return 0;
}