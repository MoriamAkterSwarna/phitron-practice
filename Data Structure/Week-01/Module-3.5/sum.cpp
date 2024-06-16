#include<bits/stdc++.h>

using namespace std;

vector <int> prefixSum(vector <int> v,int n){

    for(int i = 0; i< n; i++){
        cin >> v[i]; 
    }
    vector <int> pre(n); 

    pre[0] = v[0];

    for(int i = 1; i< n; i++){
        pre[i] = pre[i-1] + v[i]; 
    }

    return pre; 
}

int main(){

    int n; 
    cin >> n; 

    vector <int> v(n); 

    vector <int> res = prefixSum(v,n); 

    for(int i = 0; i< n; i++){
        cout << res[i] << " "; 
    }



    return 0;
}