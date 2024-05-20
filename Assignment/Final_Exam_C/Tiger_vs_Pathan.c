#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        int N;
        scanf("%d", &N);
        char S[N];
        scanf("%s", S);
        int Tcount=0, Pcount=0;
        
            for (int j = 0; j < N; j++)

            {
                if (S[j] == 'T')
                {
                    Tcount++;
                }
                else if (S[j] == 'P')
                {
                    Pcount++;
                }
            }
            
    
        if (Tcount > Pcount)
        {
            printf("Tiger\n");
        }
        else if (Pcount > Tcount)
        {
            printf("Pathaan\n");
        }
        else
        {
            printf("Draw\n");
        }
    }

    return 0;
}