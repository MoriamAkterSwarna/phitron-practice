#include <stdio.h>

int main()
{
    int N;

    scanf("%d", &N);

    if (1 < N < 21 && N % 2 != 0)
    {
        int size = 6 + (N - 1) / 2;
        int  k = 1, s = size - 1;
        for (int i = 0; i < size; i++)
        {

            for (int j = 0; j < s; j++)
            {
                printf(" ");
            }
            for (int j = 0; j < k; j++)
            {
                printf("*");
            }
            k += 2;
            s--;
            printf("\n");
            if(i == size-1)
            {
               
                for (int i = 0; i < 5; i++)
                {
                    for (int j = 0; j < 5; j++)
                    {
                        printf(" ");
                    }
                    
                    for(int j = 0; j < N; j++)
                    {
                        printf("*");
                    }
                    printf("\n");
                }
            }
        }
        


        printf("\n");
    }

    return 0;
}
