#include <bits/stdc++.h>
using namespace std;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    pair<string, pair<int, string>> p = {"hablu",{288, "48859"}}; 

    // cout << p.first << " " << p.second.first << " " << p.second.second << "\n"; 

    auto [name, next] = p; 
    auto [roll, phone] = next; 

    cout << name << " " << roll << " " << phone << "\n"; 
    
    return 0;
}