#include<bits/stdc++.h>

using namespace std;
#define ll long long

int main(){

    ll n; 
    cin >> n; 
    
    ll a[n]; 
    a[0] = 0; 
    a[1] = 1; 

// complexity O(n)
    for(ll i=2; i<=n; i++){
        a[i] = a[i-1] + a[i-2]; 
    } 

    cout << a[n] << endl;

    return 0;
}