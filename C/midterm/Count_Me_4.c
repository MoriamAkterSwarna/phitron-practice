#include<stdio.h>
#include<string.h>
int main()
{
    char S[10001];
    scanf("%s", S);

    int count[26] ={0};
    for(int i=0; i < strlen(S); i++){
    // for(int i=0; S[i] != '\0'; i++){
        int value = S[i] - 'a';
        count[value]++;
    }
    for(int i=0; i< 26; i++){
       
        if(count[i] > 0){
            printf("%c - %d\n", i +97, count[i]);
        }
    }
    return 0;
}