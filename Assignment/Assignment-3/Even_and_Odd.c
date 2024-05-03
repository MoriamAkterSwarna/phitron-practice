#include<stdio.h>

void odd_even(){
      int N;
    scanf("%d", &N);
    int A[N]; 
    for(int i=0; i<N; i++){
        scanf("%d", &A[i]);
    }
    int oddCount = 0, evenCount = 0;
    for(int i=0; i<N; i++){
        if(A[i] % 2 == 0){
            evenCount++;
        }
        else{
            oddCount++;
        }
    }
    printf("%d %d",  evenCount,oddCount);

}
int main()
{
  
    odd_even();
    return 0;
}