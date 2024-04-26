#include<stdio.h>

int main()
{
    int n; 
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    // int zero=0, one=0;
    // for(int i=0;i<n;i++)
    // {
    //     if(a[i]==0)
    //     {
    //         zero++;
    //     }else if(a[i]==1)
    //     {
    //         one++;
    //     }
    // }

    // printf(" Zero-%d\n", zero);
    // printf("One- %d", one);


    int count[7]={0};
    for(int i=0;i<n;i++)
    {
        // if(a[i]==0)
        // {
        //     count[0]++; 
        // }else if(a[i]==1)
        // {
        //     count[1]++;
        // }else if(a[i]==2)
        // {
        //     count[2]++;
        // }else if(a[i]==3)
        // {
        //     count[3]++;
        // }else if(a[i]==4)
        // {
        //     count[4]++;
        // }else if(a[i]==5)
        // {
        //     count[5]++;
        // }else if(a[i]==6)    
        // {
        //     count[6]++;
        // }


        // count[a[i]]++;

        int val = a[i];
        count[val]++;
    }

    for(int i=0;i<7;i++)
    {
        printf(" %d -> %d\n ",i, count[i]);
    }
    return 0;
}