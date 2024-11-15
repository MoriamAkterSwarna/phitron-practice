#include <bits/stdc++.h>

using namespace std;

int main()
{

   ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 

    // map<int, int> mp; // key-value pair 
    // map<vector<int>, int> mp1; // key-value pair 
    // map<pair<int, int>, int> mp2; // key-value pair 

    // vector<int > a; 
    // a.push_back(10); 
    // a.push_back(20);
    // a.push_back(30);

    // mp1[a] = 100; 

    // for (auto x : mp1){
    //     vector<int> v = x.first;
    //     for (auto y : v){
    //         cout << y << " "; 
    //     } 
    //     cout << '\n';

    // } 

    map<int, set<int>> mp; 
    set<int> s; 
    s.insert(10); 
    s.insert(20);
    s.insert(30);
     

     set<int> s1; 
    s1.insert(40);
    s1.insert(50);
    s1.insert(60); 

    set <int> s2; 
    s2.insert(70);
    s2.insert(80);
    s2.insert(90);

    mp[1] = s; 
    mp[2] = s1; 
    mp[3] = s2; 

    for(auto [key, value] : mp){
        cout << key << " -> "; 
        for(auto x : value){
            cout << x << " "; 
        }
        cout << '\n'; 
    }

    int x = 6, y = 10; 
    auto LB1 = mp.lower_bound(x); 
    if(LB1 != mp.end()){
        int ans = LB1->first; 
        auto LB2 = mp[ans].lower_bound(y); 
        if(LB2 != mp[ans].end()){
            cout << *LB2 << '\n'; 
        }

    }
    else {
        cout << "Key not found" << '\n'; 
    }
        


    return 0;
}