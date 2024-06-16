#include<bits/stdc++.h>

using namespace std;

int main(){

    
    int n; 
    cin >> n; 

    vector <int> v(n); 
    for(int i = 0; i< n; i++){
        cin >> v[i]; 
    }

    vector <int> pre(n);

    pre[0] = 0; 

    

    for(int i = 1; i< n; i++){  // o(n)
        pre[i] = pre[i-1] + v[i-1]; 
    }

    for(int i = 0; i< n; i++){  // O(n)
        cout << pre[i] << " "; 
    }


    return 0;
}