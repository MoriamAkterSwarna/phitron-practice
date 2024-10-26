#include<stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
       char S[10001];
         scanf("%s", S);
    int smallCount= 0, capitalCount= 0, digitCount= 0;
         
         for(int i=0; S[i] != '\0'; i++){
            if(S[i] >='A' && S[i] <='Z'){
                capitalCount++;
            }
            else if(S[i] >='a' && S[i] <='z'){
                smallCount++;
            }
            else{
                digitCount++;
            }
         }
    printf("%d %d %d\n", capitalCount, smallCount, digitCount);
    }
    return 0;
}