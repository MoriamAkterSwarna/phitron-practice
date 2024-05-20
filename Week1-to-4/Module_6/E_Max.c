#include<stdio.h>
#include<limits.h>

int main()
{
    int n; 
    scanf("%d", &n); 

    //maximum value 
    // int a, max =0;
    // for(int i = 1; i <=n; i++){
    //     scanf("%d", &a);
    //     if(a > max){
    //         max = a;
    //     }

    // }
    // printf("%d\n", max);


// maximum and minimum both
    int a, max= INT_MIN, min = INT_MAX;
    for(int i = 1; i <=n; i++){
        scanf("%d", &a);
        if(a > max){
            max = a;
        }
        if(a < min){
            min = a;
        }
    }
    printf("Max: %d\n", max);
    printf("Min: %d\n", min);
    return 0;
}