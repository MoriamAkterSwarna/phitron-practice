#include<bits/stdc++.h>

using namespace std;

// recursive function => complexity O(n)
int fact (int n){

    //base case
    if(n== 0) return 1; 
    // int chotoFact = fact(n-1); 
    // return n*chotoFact;
    return n*fact(n-1);
}

int main(){

    int n; 
    cin >> n; 

    // loop  complexity O(n)
    int ans = 1; 
    for(int i = 1; i<=n; i++){
        ans *= i; 
    } 
    cout << ans << endl;


    cout << fact(n) << endl;

    return 0;
}