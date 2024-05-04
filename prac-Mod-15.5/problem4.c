#include<stdio.h>


void change_it(int arr[], int n){
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++){
        if(arr[i] == arr[n-1]){
            arr[i] = 100;
        
        }
    }
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    change_it(arr, n);
    return 0;
}