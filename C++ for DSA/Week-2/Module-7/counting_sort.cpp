#include<bits/stdc++.h>

using namespace std;

int main(){

    string s; 
    cin >> s; 

    int frq[26] = {0}; 

    for(char c: s){
        // cout << c <<  << endl;

        frq[c - 'a']++;
    }

    for(char c = 'a'; c <= 'z'; c++){
        for(int j = 0; j < frq[c - 'a']; j++){
            cout << c ;
        }
    }




    return 0;
}