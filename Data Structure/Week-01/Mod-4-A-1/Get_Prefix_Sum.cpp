#include<bits/stdc++.h>

using namespace std;

int main(){

    long long int n; 

    cin >> n; 
    long long int a[n];  

    for(int i =0; i< n; i++){
        cin >> a[i];
    }

    long long int pre[n]; 

    pre[0] = a[0];
    
for( int i =1; i< n; i++){  // o(n)
    pre[i] = pre[i-1] + a[i];
   
    
}


for(int i = n-1; i >=0; i--){  // O(n)
    cout << pre[i] << " "; 
}


    

  

    return 0;
}