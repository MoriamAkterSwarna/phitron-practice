#include<stdio.h>

int main()
{
    int T; 
    scanf("%d", &T);
   while (T--)
   {
     int M1, M2, D; 
    scanf("%d %d %d", &M1, &M2, &D); 
    int M3= M1 + M2; 
    int D1 =(M1 * D)/ M3;
    int result = D -D1; 
    printf("%d\n", result);
   }
   

    return 0;
}