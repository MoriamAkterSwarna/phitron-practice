#include<stdio.h>


int small_to_capital(char ch){
    char val = ch - 32;
    return val;
}
int main()
{
    char res1 = small_to_capital('a');
    char res2 = small_to_capital('b');
    char res3 = small_to_capital('c');
    printf("%c\n %c\n %c\n", res1,res2, res3);
    return 0;
}