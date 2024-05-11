#include<stdio.h>

int main()
{
     int N, M; 
     scanf("%d %d", &N, &M);
        int arr[N][M];
        for(int i = 0; i < N; i++)
        {
            for(int j = 0; j < M; j++)
            {
                scanf("%d", &arr[i][j]);
            }
        }

        int flag = 1;
        if(N != M){
            flag = 0;
        }
            for(int i=0; i<N; i++ ){
                for(int j =0; j<M; j++){
                    if(i ==j || i+j == N-1){
                        if(arr[i][j] != 1){
                            flag = 0;
                            break;
                        }
                    }
                    
                    else{
                        if(arr[i][j] != 0){
                            flag = 0;
                            break;
                        }
                    }
                    
                    
                }
                if(flag == 0){
                    break;
                }
            }

            if(flag == 1){
                printf("YES");
            }
            else{
                printf("NO");
            }

        
    return 0;
}