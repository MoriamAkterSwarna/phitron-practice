#include<bits/stdc++.h>

using namespace std;

int main(){

    int n, q;                     
    cin>>n>>q; 

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    while(q--){  // o(q)
        int x;
        cin>>x;
        bool flag = false;

        int l = 0, r = n-1;
        int ans = -1;

        for(int i=0; i<n; i++){  // o(n)
            if(a[i] == x){
                flag = true;
                break; 
            }

        }

// total time complexity = o(n*q) = 10^5 * 10^5 = 10^10
        if(flag){
            cout<<"found"<<endl;
        }
        else{
            cout<<"not found"<<endl;
        }
    }




    return 0;
}