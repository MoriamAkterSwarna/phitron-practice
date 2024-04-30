#include<stdio.h>

int capital_to_small( char ch){
    char val = ch + 32;
    return val;

}

int main()
{
    char res1 = capital_to_small('A');
    char res2 = capital_to_small('B');
    char res3 = capital_to_small('C');
    printf("%c\n %c\n %c\n", res1,res2, res3);    
    return 0;
}