#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    multiset<int> ms; // multiset allows duplicate elements

    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        ms.insert(x);
    }

    // auto it = ms.begin();
    // it++;
    // it++;
    // it--;
    // it--;

    // cout << *it << " ";

    for (auto value : ms)
    {
        cout << value << " ";
    }
    cout << "\n";

    // auto it = ms.find(6);
    // if(it != ms.end()){
    //     cout << *it << "\n";
    //     cout << "found\n";
    // }else{
    //     cout << "Not Found\n";
    // }

    // ms.erase(6);
    // for (auto value : ms)
    // {
    //     cout << value << " ";
    // }
    // cout << "\n";

    cout << ms.count(6) << "\n";  // Time complexity is O(logn) 

    // O(Log n) 
    //  O(Log n + k) where k is the number of elements that are equal to the key 


    // int N;
    // cin >> N;
    
    // auto it = ms.lower_bound(N); 
    // if (it == ms.end())
    // {
    //     cout << "Not Found\n";
    // }
    // else
    // {
    //     cout << *it << "\n";
    // }

    int N; 
    cin >> N; 
    auto it = ms.upper_bound(N); 
    if(it == ms.end()){
        cout << "Not Found\n";
    }else{
        cout << *it << "\n";
    }


    return 0;
}