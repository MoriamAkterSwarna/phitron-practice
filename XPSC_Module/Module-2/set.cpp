#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    set<int> s;

    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }

    // auto it = s.begin();
    // it++;
    // it++;
    // it-- ;
    // it--;
    // cout << *it << " ";

    for (auto value : s)
    {
        cout << value << " ";
    }
    cout << "\n";

    // auto it = s.find(6);
    // if (it != s.end())
    // {
    //     cout << "found\n";
    // }
    // else
    // {
    //     cout << "Not Found\n";
    // }

    // s.erase(6); // need to check if element is present or not
    // for (auto value : s)
    // {
    //     cout << value << " ";
    // }

    // cout << s.count(6) << "\n";

    int N;
    cin >> N;

    /* `lower_bound` is a function in C++ that returns an iterator pointing to the first
    element in a set that is not less than a specified value.  */
    // auto it = s.lower_bound(N);

    // // cout << *it << "\n";
    // if (it == s.end())
    // {
    //     cout << "Given element is not present in the set\n";
    // }
    // else
    // {
    //     cout << *it << "\n";
    // }

    /* `upper_bound` is a function in C++ that returns an iterator pointing to the first
    element in a set that is greater than a specified value.  */ 
    
    auto it = s.upper_bound(N);

    // cout << *it << "\n";
    if (it == s.end())
    {
        cout << "Given element is not present in the set\n";
    }
    else
    {
        cout << *it << "\n";
    }

    return 0;
}