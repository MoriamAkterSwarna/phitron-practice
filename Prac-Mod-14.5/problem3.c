#include<stdio.h>


int char_to_ascii(char ch){
    //  char ch;
    //  scanf("%c", &ch); 
     
     int val = ch ;
     return val; 
}
int main()
{
    int res1 = char_to_ascii('A'); 
    int res2 = char_to_ascii('a'); 
    int res3 = char_to_ascii('0'); 
    printf("%d\n %d\n %d\n", res1,res2, res3);

    return 0;
}