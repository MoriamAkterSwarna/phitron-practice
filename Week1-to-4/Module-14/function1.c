#include<stdio.h>


// return_type name(parameter)
// {
//     //code
//     return what?
// }

//function above main function 
int sum(int x, int y){
    // int sumation = x + y; 
    // return sumation; 
    return x + y; 
}

// int sum(int x, int y);
int main()
{
    // int res = sum(10,20);
    // printf("%d", res);
    printf("%d", sum(10,20));
    printf("%d", sum(100,20));
    int a, b; 
    scanf("%d %d", &a, &b);
    printf("%d", sum(a,b));
    return 0;
}


// int sum(int x, int y)
// {
     
//     return x + y; 
// }