#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n' 
#define tst int t; cin >> t; while(t--)


void firebird_solve(){
    int n, q;
    cin >> n >> q;
    vector<int> a(n), prefix(n + 1);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.rbegin(), a.rend());
    for (int i = 1; i <= n; i++)
    {
        prefix[i] = prefix[i - 1] + a[i - 1];
    }
    for (int i = 0; i < q; i++)
    {
        int k, ans = -1;
        cin >> k;
        auto it = lower_bound(prefix.begin(), prefix.end(), k);
        if (it != prefix.end())
        {
            ans = it - prefix.begin();
        }
        cout << ans << '\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    tst{
        firebird_solve();
    }

    return 0;
}