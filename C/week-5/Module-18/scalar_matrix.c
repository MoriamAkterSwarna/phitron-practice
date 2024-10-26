#include<stdio.h>

int main()
{
    int row, col; 
    scanf("%d %d",&row,&col);
    int a[row][col];
    int elem= row*col;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            
            scanf("%d",&a[i][j]);
        }
    } 
int flag =  1; 
   if(row !=col){
         flag = 0; 
    }
    else{
         for(int i=0;i<row;i++)
         {
              for(int j=0;j<col;j++)
              {
               if(a == j){
                {
                    if(a[i][j] != a[0][0]){
                        flag = 0;

                    }
                }
               }
                 if( a[i][j]!=0)
                {
                     flag = 0; 
                    
                }
              
              }
         }
   }
   if(flag == 1){
       printf("Scalar Matrix\n");
    }else {
        printf("Not a Scalar Matrix\n");
    }

    return 0;
}