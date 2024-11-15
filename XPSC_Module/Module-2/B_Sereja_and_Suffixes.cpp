// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {

//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n, m;
//     cin >> n >> m;
//     vector<int> a(n+1);
//     for (int i = 1; i <= n; i++)
//     {
//         cin >> a[i];
//     }

//     // Total time complexity = O(n) + O(m) * O(logn) = O(n) + O(mlogn)
//     for (int i = 1; i <= m; i++) //O(m)
//     {
//         int pos;
//         cin >> pos;
//         set<int> s;
//         for (int j = pos; j <= n; j++)
//         {
//             s.insert(a[j]);   //O(logn)
//         }
//         cout << s.size() << '\n';
//     }

//     return 0;
// }


#include<bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    int n, m;
    cin >> n >> m; 

    vector<int> a(n+1), cnt(n+1);

    for(int i = 1; i <= n; i++){
        cin >> a[i]; 
    }

    set <int > s;; 
    for(int i = n; i >= 1; i--){
        s.insert(a[i]); 
        cnt[i] = s.size(); 
    }

    for(int i = 1; i <= m; i++){
        int pos; 
        cin >> pos; 
        cout << cnt[pos] << '\n'; 
    }

    return 0;
}