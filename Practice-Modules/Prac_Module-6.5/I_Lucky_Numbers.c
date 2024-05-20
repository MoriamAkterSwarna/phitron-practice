#include<stdio.h>

int main()
{
    int N; 
    scanf("%d", &N); 
    
    if(10<=N <= 99){
        int n1, n2; 
    
    n2 = N %10;
    n1= N/10; 
    if( (n2 != 0 && n1 % n2 == 0) || (n1 != 0 && n2 % n1 == 0)){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    }

    return 0;
}