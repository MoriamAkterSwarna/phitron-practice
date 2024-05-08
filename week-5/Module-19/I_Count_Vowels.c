#include<stdio.h>

int count (int i, char s[])
{
    if(s[i] == '\0') {
        return 0;
    }
    int ans = count(s, i+1);
    if(s[i] >= 'A' && s[i] <= 'Z')
    {
        s[i] = s[i] + 32;
    }
    if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
    {
        return ans +1; 
    }
    else{
        return  ans; 
    }
}
int main()
{
    int s[205];
    fgets(s, 205, stdin);
    int cnt = count( 0,s);
    printf("%d", cnt);
    return 0;
}