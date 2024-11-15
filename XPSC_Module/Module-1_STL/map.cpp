#include <bits/stdc++.h>
using namespace std;
#define ll long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    map<int, int> mp;
    // mp.insert({10,20});

    // cout << mp[10] << "\n" ;

    mp[10] = 20;
    mp[2] = 12;
    mp[10] = 15;
    mp[8] = 22;
    mp[17] = 7;
    mp[5] = 9;

    cout << mp[10] << "\n";
    cout << mp[2] << "\n";
    // way 1
    for (auto [key, value] : mp)
    {
        cout << key << "->" << value << "\n";
    }

    // way 2
    // for(auto it: mp){
    //     int key = it.first, value = it.second;
    //     cout << key << "->" << value << "\n";
    // }

    // way 1 to => find
    auto it = mp.find(10);
    // cout << it->first << "->" << it->second << "\n";

    if (it == mp.end())
    {
        cout << "Key not found";
    }
    else
    {
        cout << it->first << "->" << it->second << "\n";
    }

    // way 2 to => find

    // cout << mp[25] << "\n";
    // cout << mp[9] << "\n";
    // for(auto it : mp){
    //     int key = it.first , value = it.second;
    //     cout << key << "->" << value << "\n";
    // }

    // ? Erase
    // mp.erase(8);

    // auto it = mp.find(10);
    // if (it != mp.end())
    // {
    //     mp.erase(it);
    // }


   

    // cout << mp.size() << "\n"; 
    // cout << mp.empty() << "\n"; 

    // auto it = mp.begin(); 
    // cout <<it->first << " " << it->second << "\n"; 

    // auto it = mp.lower_bound(6); 
    // cout <<it->first << " " << it->second << "\n"; 
    auto it = mp.upper_bound(8); 
    cout <<it->first << " " << it->second << "\n"; 

    return 0;
}