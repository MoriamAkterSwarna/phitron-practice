#include <bits/stdc++.h>
using namespace std;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);



    int n, m; 
    cin >> n >> m; 

    // fixed value 
    // vector<vector<int>> v(n,vector<int>(m,2)); 

    // for(int i = 0; i < n ; i++){
    //     for(int j = 0;  j < m ; j++){
    //         cout << v[i][j] << " " ; 
    //     }
    //     cout << "\n"; 
    // }

    vector<vector<int>> v;

    for (int i = 0; i < n; i++)
    {
        int m;  
        cin >> m;
        vector<int> a;  

        for (int j = 0; j < m; j++)
        {
            int x; 
            cin >> x; 
            a.push_back(x); 
        }

        // for(auto val:a){
        //     cout << val << " "; 
        // }
        // cout << endl; 

        v.push_back(a); 
        
    }

    for(int i = 0; i < n; i++){
        for(int j =0; j < v[i].size(); j++){
            cout << v[i][j] << " ";
        }
        cout << "\n"; 
    }

    return 0;
}