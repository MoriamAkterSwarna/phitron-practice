#include <stdio.h>

int main()
{
    long long int a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);

    long long int res1 = 0, res2 = 0, min, rm1, rm2, rm3;
    if (a >= 1 && b >= 1 && c >= 1)
    {
        if (a < b && a < c)
        {
            min = a;
        }
        else if (b < a && b < c)
        {
            min = b;
        }
        else
        {
            min = c;
        }

        rm1 = a - min;
        rm2 = b - min;
        rm3 = c - min;
        // printf("%lld %lld %lld\n", rm1, rm2, rm3);
        if (rm1 >= 2 && rm2 == 0 && rm3 >= 1)
        {
            
                res2 = rm1/2;
                if(rm3 < rm1/2)
                {
                    res2 = rm3;
                }
                
        }
        res1 = min;
        long long int max = res1 + res2;

        printf("%lld", max);
    }
    else
    {
        printf("%d", 0);
    }

    return 0;
}