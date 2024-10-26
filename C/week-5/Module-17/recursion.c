#include<stdio.h>

void fun(){
    printf("fun start\n");
    fun();
    printf("fun end\n");
}

int main()
{
    fun();
    return 0;
}