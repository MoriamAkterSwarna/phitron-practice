#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n; 
    
    vector <int > v(n); 

    for(int i = 0; i< n; i++){
        cin >> v[i]; 
    }

    vector <int> pre(n); 

    pre[0] = v[0]; 


    // int sum = pre[0];

    int l = 0, r= n-1, mid = (l + r)/2; 
    for(int i =1; i< n; i++){
        pre[i] = pre[i-1] + v[i]; 

       if(pre[mid-1] == pre[r] - pre[mid]){
           cout << mid; 
           break; 
       }    
    }




    return 0;
}