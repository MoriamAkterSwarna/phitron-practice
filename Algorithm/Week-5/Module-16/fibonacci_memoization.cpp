#include<bits/stdc++.h>

using namespace std;
#define ll long long

const ll N = 1e5+2; 

ll dp[N]; 

ll fibo(ll n){
    //base case
    if(n==0 || n==1) return n;

    if(dp[n] != -1) return dp[n];

   ll ans = fibo(n-1) + fibo(n-2);   // complexity O(n) 
   dp[n] = ans; 
   return ans;
    
}

int main(){

    ll n; 
    cin >> n; 
    memset(dp, -1, sizeof(dp)); 

    cout << "Fibonacci of " << n << " is " << fibo(n) << endl;

    return 0;
}