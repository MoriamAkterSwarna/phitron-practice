#include<stdio.h>
#include<string.h>
int main()
{
    
    char S[1000001];
    scanf("%s", S);
    int sum =0;
    for(int i=0; i<strlen(S); i++)
    {
        // printf("%d", S[i] - 48);

        sum = sum + (S[i] - 48);
    }
    printf("%d\n", sum);
    return 0;
}