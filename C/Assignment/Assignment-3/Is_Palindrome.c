#include<stdio.h>
#include<string.h>
int is_palindrome(char* S){
    
    int len = strlen(S);
    char revA[len+1];
    strcpy(revA, S);
    for(int i= 0; i<=len/2;i++){
        
         char val = revA[i];
            revA[i] = S[strlen(S)-1-i];
            revA[strlen(S)-1-i] = val;

    }
    // revA[strlen(S)] = '\0'; 
    if( strcmp(S, revA) == 0){
        return 1; 
    } 
    else{
        return 0;
    }
}

int main()
{
    char S[10001]; 
    scanf("%s", S);
    int result = is_palindrome(S);
    if(result == 1)
        printf("Palindrome");
    else
        printf("Not Palindrome");
    return 0;
}