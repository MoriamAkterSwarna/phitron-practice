#include<stdio.h>

void Max_Min(int *arr, int N){
    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    int min = arr[0];
    for(int i = 0; i < N; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }
    printf("%d %d", min, max);

}
int main()
{
    int N;
    int arr[N];
    Max_Min(arr, N);
    return 0;
}