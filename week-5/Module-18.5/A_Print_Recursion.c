#include <stdio.h>

void printRec(int N)
{
    if (N == 0)
    {
        return;
    }

    printf("I love Recursion\n");

    printRec(N - 1);
    return;
}

int main()
{
    int N;
    scanf("%d", &N);
    printRec(N);
    return 0;
}