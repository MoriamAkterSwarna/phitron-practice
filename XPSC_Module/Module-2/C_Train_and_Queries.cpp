#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        map<int, set<int>> ms;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            ms[x].insert(i);
        }

        //  for (auto [key, value] : ms)
        //  {
        //      cout << key << " : ";
        //      for (auto x : value)
        //      {
        //          cout << x << " ";
        //      }
        //      cout << endl;
        //  }

        for (int i = 1; i <= m; i++)
        {
            int left, right;
            cin >> left >> right;
            if (ms.find(left) == ms.end() || ms.find(right) == ms.end())
            {
                cout << "NO" << endl;
            }
            else
            {
                int left_start, right_end;
                left_start = *ms[left].begin();
                right_end = *ms[right].rbegin();

                if (left_start < right_end)
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
        }
    }

    return 0;
}