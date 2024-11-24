#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define tst   \
    int t;    \
    cin >> t; \
    while (t--)

void firebird_solve()
{

    int a = 11, b = 19;
    int ans = (a & b);
    int ans1 = (a | b);
    int ans2 = (a ^ b);

    int ans3 = (a << 2);
    cout << ans << " " << ans1 << " " << ans2 << " " << ans3 << nl;

    cout << (14 >> 2) << nl;

    // cout << (1 << 40) << nl;  // it will give garbage value 
    cout << (1LL << 40) << nl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    firebird_solve();

    return 0;
}