#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;
    

    multiset<int> ms1;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        ms1.insert(x);
    }

    int res = 0, prob = 1;
    while (!ms1.empty())
    {
        auto lb = ms1.lower_bound(prob);
        if (lb != ms1.end())
        {
            res++;
            ms1.erase(lb);
        }
        else
        {
            break;
        }
        prob++;
    }

    cout << res << '\n';

    return 0;
}