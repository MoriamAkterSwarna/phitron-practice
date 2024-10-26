#include <stdio.h>
int main()
{
    int T;
    scanf("%d", &T);

    if (T > 0)
    {
        for (int i = 1; i <= T; i++)
        {
            long long int M;
            long long int A, B, C;
            scanf("%lld %lld %lld %lld", &M, &A, &B, &C);

            long long int D;
            if (M >= 0 && A >= 0 && B >= 0 && C >= 0)
            {
                
                long long int value =A * B * C;

                if (M == 0)
                {
                    D = 0;
                }
                else if (value > M)
                {
                    D = -1;
                }

                else if (M % value == 0)
                {

                    D = M / value;
                }

                else
                {
                    D = -1;
                }
            }

                
            printf("%lld", D);
            printf("\n");
        }
    }
    return 0;
}