#include<bits/stdc++.h>

using namespace std;

int main(){

    int T; 
    cin >> T; 

    while(T--){

        int n,k; 

        cin >> n >> k; 

        string st1, st2; 
        cin >> st1 >> st2; 

        int cnt = 0; 
        for(int i = 0; i < n; i++){
            if(st1[i] != st2[i]){
                cnt++; 
            }
        } 

        if(cnt > k){
            cout << "NO" << endl; 
        }
        else{
            cout << "YES" << endl;
        }
    }

    return 0;
}