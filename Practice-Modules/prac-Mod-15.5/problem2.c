#include<stdio.h>


int my_len(char* s){

int len = 0;
for(int i = 0; s[i] != '\0'; i++){
    len++;
}
return len;
    // int i = 0;
    // while(s[i] != '\0'){
    //     i++;
    // }
    // return i;

}
int main()
{
    char s[100]; 
    scanf("%s", s); 
    printf("%d", my_len(s));
    return 0;
}