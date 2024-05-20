#include<stdio.h>
#include<string.h>
int main()
{

    char s[100];
    scanf("%s", s);
    int count[26]={0};
    for(int i=0;i<strlen(s);i++)
    {
        // printf("%c", s[i]);

        int value = s[i]-97;
        // printf("%d\n", value);
        count[value]++;


    }
    // for(int i=0;i<26;i++)
    // {
    //     // if(count[i]>0)
    //     // {
    //         printf("%c-%d\n", i+97, count[i]);
    //     // }
    // }

    for(int i=0; i<strlen(s);i++)
    {

        int value = s[i]-97;
        if(count[value]>0)
        {
            printf("%c-%d\n", s[i], count[value]);
        }
            count[value]=0;
    }
    return 0;
}