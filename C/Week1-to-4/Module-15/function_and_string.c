#include<stdio.h>
#include<string.h>

void fun(char ar[]){

    // for(int i=0;i<n;i++){
    //    printf("%d ", arr[i]);
    // }
    // int sz= sizeof(ar)/sizeof(char);
    // printf("Size of array - %d\n", sz);
    printf("Size of array inside fun- %d\n", strlen(ar));

    // char n[] = "World";
    // return n; //it will return only the 1st character of the string
}
int main()
{
    char ar[20]= "Hello";
    // int sz= sizeof(ar)/sizeof(ar[0]);
    // printf("Size of array inside main- %d\n", sz);
    fun(ar);
    return 0;
}