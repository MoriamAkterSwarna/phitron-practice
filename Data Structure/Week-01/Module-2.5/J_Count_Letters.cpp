#include<bits/stdc++.h>

using namespace std;

int main(){

    
    
    string s; 
    cin >> s; 

    vector <int> cnt(26,0) ; 

    for(int i =0; i< s.length(); i++){
        int val = s[i] -97; 
        cnt[val]++;
    } 
    for(int i= 0; i< cnt.size(); i++){
        if(cnt[i] != 0){
            cout << char(i+'a') << " " << ":" << " " << cnt[i] << endl;
        }
    }



    return 0;
}