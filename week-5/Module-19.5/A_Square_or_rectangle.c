#include<stdio.h>

int main()
{
    int t; 
    scanf("%d\n",&t); 
    int w, h; 
    // for(int i = 0; i < t; t++){
    //     scanf("%d %d",&w,&h); 
        
    // }

    // for(int i = 0; i < t; t++){
    //     if( w == h){
    //         printf("Square\n");
    //     }
    //     else{
    //         printf("Rectangle\n");
    //     }
    // }

    while(t--){
        scanf("%d %d",&w,&h); 
        if( w == h){
            printf("Square\n");
        }
        else{
            printf("Rectangle\n");
        }
    }
    return 0;
}