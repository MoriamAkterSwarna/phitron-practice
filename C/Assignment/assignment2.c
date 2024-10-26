#include<stdio.h>
#include<limits.h>


int main()
{
    //problem 1
    // int N; 
    // scanf("%d", &N);
    // int arr[N];
    // for(int i = 0; i < N; i++)
    // {
    //     scanf("%d", &arr[i]);
    // }
    // for(int i = 0; i < N; i++)
    // {
    //     printf("%d. I Want More Assignments\n", i+1);
    // }
    
    //problem 2


    // int N;
    // scanf("%d", &N);
    // int arr[N];
   
    // if(N > 0){
    //     for(int i = 1; i <= N; i++)
    //     {
    //        printf("%d ", i);
    //     }
    // }
    // else {
    //     for(int i = N; i <= 0; i++)
    //     {
    //         printf("%d ", i);
    //     }
    // }

    //p3 


    // int N;
    // scanf("%d", &N);
    // int arr[N];
    // for(int i = 0; i < N; i++)
    // {
    //     scanf("%d", &arr[i]);
    // } 
    // for(int i = N-1; i >=0; i--)
    // {
    //     if(i % 2 != 0)
    //     {
    //         printf("%d ", arr[i]);
    //     }
    // }


     //p4 


    // int N;
    // scanf("%d", &N);
    // int arr[N];
    // for(int i = 0; i < N; i++)
    // {
    //     scanf("%d", &arr[i]);
    // } 
    // int negatSum = 0;
    // int positSum = 0;
    // for(int i = 0; i < N; i++)
    // {
    //     if(arr[i] > 0)
    //     {
    //         positSum += arr[i];
          
    //     }     
    //     else{
    //         negatSum += arr[i];
       
    //     }
        
    // }
    // printf("%d %d", positSum, negatSum);


    //p4 


    int N;
    scanf("%d", &N);
    int arr[N];
    for(int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    } 
    
    
    int X, V; 
    scanf("%d %d", &X, &V);
    arr[X] = V;
    for(int i = N-1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    


    return 0;
}