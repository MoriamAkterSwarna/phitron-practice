#include<stdio.h>

void fun(int * arr, int n, char *ar){
    // for(int i=0;i<n;i++){
    //    printf("%d ", ar[i]);
    // }
    printf("\n");
    arr[0]=99;
    ar[0]='A';
}

int main()
{
    int arr[5]={10,20,30,40,50};

    char ar[20]= "Hello";
    fun(arr, 5, ar);
    printf("%s\n", ar);
    for(int i=0;i<5;i++){
       printf("%d ", arr[i]);
    }

    return 0;
}