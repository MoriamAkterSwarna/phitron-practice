#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n' 
#define tst int t; cin >> t; while(t--)


void firebird_solve(){
        
        int n, m; 
        cin >> n >> m; 

        vector<int> a(n), b(m); 
        for(int i = 0; i < n; i++) cin >> a[i]; 
        for(int i = 0; i < m; i++) cin >> b[i]; 

        int l = 0, r = 0, cnt = 0; 
        while( r < m ){
            if(l < n && a[l] < b[r]){
                cnt++;
                l++; 
            }else{
                cout << cnt << " "; 
                r++; 
            }
        }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
   
        firebird_solve();
    

    return 0;
}