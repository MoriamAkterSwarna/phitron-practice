#include<bits/stdc++.h>

using namespace std;

#define ll long long 

const int maxN = 100005;
  ll num; 
  int dp[maxN]; 
bool reachValue(ll n){
    if(n  >  num){
        return false;  
    }
    if(n == num){
        return true; 
    } 

    if(dp[n] != -1){
        return dp[n]; 
    }
    bool op1 = reachValue(n+3); 
    bool op2 = reachValue(n*2); 

    return dp[n] = op1 || op2;
   
}

int main(){

    int t; 
    cin >> t; 
    while(t--){
     
         cin >> num; 

         for(int i = 0; i <= num; i++){
             dp[i] = -1; 
         }

         if(reachValue(1)){
             cout<< "YES" << endl; 
         }
         else{
             cout<< "NO" << endl; 
         }


    }

    return 0;
}