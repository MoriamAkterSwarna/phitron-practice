#include<stdio.h>

int main()
{
    int A, B, C; 
    scanf("%d %d %d", &A, &B, &C);
    int arr[3] = {A, B, C};
    
    int temp = 0;
    for(int i = 0; i < 3; i++)
    {
        for(int j = i+1; j < 3; j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("%d\n%d\n%d\n", arr[0], arr[1], arr[2]); 
    printf("\n");
    printf("%d\n%d\n%d", A, B, C);
    return 0;
}