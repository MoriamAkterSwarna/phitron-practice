#include <bits/stdc++.h>

using namespace std;

int dp[1005][1005];

bool isPerfectMarks(int a[], int n, int s)
{

    if (n == 0)
    {
        if (s == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    if (dp[n][s] != -1)
    {
        return dp[n][s];
    }

    if (a[n - 1] <= s)
    {
        bool op1 = isPerfectMarks(a, n - 1, s - a[n - 1]);
        bool op2 = isPerfectMarks(a, n - 1, s);

        return dp[n][s] = op1 || op2;
    }
    else
    {
        return dp[n][s] = isPerfectMarks(a, n - 1, s);
    }
}

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n, s;
        cin >> n >> s;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        s = 1000 - s;

        bool dp[n + 1][s + 1];

        dp[0][0] = true;

        for (int i = 1; i <= s; i++)
        {
            dp[0][i] = false;
        }

        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j <= s; j++)
            {
                if (a[i - 1] <= j)
                {

                    dp[i][j] = dp[i - 1][j - a[i - 1]] || dp[i - 1][j];
                }
                else
                {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }

        if (dp[n][s])
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}