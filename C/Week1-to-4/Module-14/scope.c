#include<stdio.h> 


int x = 500 ; 

void fun(void){
    int s = 10;
    printf("inside fun %d\n", s);
        printf("inside fun %d\n", x);
}

int main()
{
    int s = 20; 
    printf("inside main %d\n", s);
    printf("inside main %d\n", x);

    fun(); 

    return 0;
}