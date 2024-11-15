#include <bits/stdc++.h>
using namespace std;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n; 
    cin >> n; 
    string s; 
    for(int i = 1; i <= n; i++){
        char c; 
        cin >> c; 
        s.push_back(c); 
    }

    s.pop_back(); 
    cout << s << '\n';

    cout << s.front() << " " << s.back() << '\n';
    s.clear();
    cout << s.empty() << '\n';

    string s;
    cin >> s;
    cout << s.substr(1, 3) << '\n';
    cout << s.substr(2) << '\n';

    return 0;
}