#include<stdio.h>

void numbers(int N){
   

   
    for(int i = 1; i <= N; i++){
        if (i == N) {
            printf("%d", i);  // no space after the last number
        } else {
            printf("%d ", i);  // space after all other numbers
        }
    }
}

int main()
{
    int N;
     scanf("%d", &N); 
    numbers(N);
    return 0;
}