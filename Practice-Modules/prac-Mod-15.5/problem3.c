#include<stdio.h>

int count_odd(int arr[], int N ){
    for(int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
    }
    int odd_count = 0;
    for(int i = 0; i < N; i++){
        if(arr[i] % 2 != 0){
            odd_count++;
        }
    }
    return odd_count;

}
int main()
{
    int N;
    scanf("%d", &N);
    int arr[N];
     int res = count_odd(arr, N);
    printf("%d", res);
    return 0;
}